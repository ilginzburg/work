#include "database.h"


void read_from_file( database* db, char const* db_file )
{
    if(db == nullptr)
    {
        printf("database not found\n");
        return;
    }
    FILE* file;
    file = fopen(db_file, "r");
    if (file == nullptr)
    {
        printf("file doesn't exist\n");
        file = fopen(db_file, "w");
        if (file == nullptr)
        {
          printf("Error creating new file\n");
          return;
        }
        printf("New file has been created\n");
    }

    int size = 0;
    fscanf( file, "%d", &size );
    for (int i=0; i<size; ++i)
    {
        char teamA[1024];
        int goalsA = 0;
        char teamB[1024];
        int goalsB = 0;
        fscanf(file, "%s", teamA);
        fscanf(file, "%d", &goalsA);
        fscanf(file, "%s", teamB);
        fscanf(file, "%d", &goalsB);
        add(db,teamA,goalsA,teamB,goalsB);
    }
}


void write_to_file( database* db, char const* db_file )
{
    FILE* file = fopen( db_file, "w" );

    if (file == nullptr || db == nullptr)
        return;

    fprintf( file, "%d\n", db->size );
    for (int i=0; i<db->size; ++i)
    {
       fprintf( file, "%s\n", db->games[i]->teamA);
       fprintf( file, "%d\n", db->games[i]->goalsA);
       fprintf( file, "%s\n", db->games[i]->teamB);
       fprintf( file, "%d\n", db->games[i]->goalsB);
    }
  closeFile(file);
}


int closeFile(FILE *db_file)
{
    if(fclose(db_file))
    {
       printf("ERROR: File has not been closed\n");
       return 1;
    }
    printf("File db_file.txt has been closed successfully\n");
 return 0;
}


int add(database* db, const char* teamA, int goalsA, const char* teamB, int goalsB)
{
    if(db == nullptr)
    {
        printf("ERROR: database db doesn't exist");
        return 1;
    }
    Game** new_games = new Game*[db->size +1];
    for(int i=0; i<db->size; ++i)
        new_games[i] = db->games[i];
    if(db->games != nullptr)
         delete[] db->games;
    db->games = new_games;
    db->games[db->size] = makeGame(teamA,goalsA,teamB,goalsB);
    ++db->size;
    printf("Game %s : %s (%d - %d) has been added to database db\n",
            db->games[db->size-1]->teamA,
            db->games[db->size-1]->teamB,
            db->games[db->size-1]->goalsA,
            db->games[db->size-1]->goalsB);
    return 0;
}


int del(database* db, const char* teamA, int goalsA, const char* teamB, int goalsB)
{
    if(db == nullptr)
    {
        printf("ERROR: Database db doesn't exist\n");
        return 1;
    }
    if(db->size == 0)
    {
        printf("Database db is empty\n");
        return 1;
    }
    for(int i=0; i<db->size;)
    {
        if((db->games[i]->goalsA == goalsA)&&
           (db->games[i]->goalsB == goalsB)&&
           (strcmp(db->games[i]->teamA,teamA) == 0)&&
           (strcmp(db->games[i]->teamB,teamB) == 0))
        {
           if(removeGame(db->games[i]) == 0)
           {
               for(int j=i; j<db->size-1; ++j)
                   db->games[j] = db->games[j+1];
               --db->size;
               printf ("Game removed from Database db successfully\n");
               return 0;
           }
           else
           {
               printf ("ERROR: Can't remove game from Database db\n");
               return 1;
           }
        }//if found
      ++i;
    }//for
        printf ("Game has not been found in Database db\n");
    return 0;
}


void find(database* db, const char* team)
{
    for(int i=0; i<db->size; ++i)
    {
        if(strcmp(db->games[i]->teamA,team) == 0)
               printGame(db->games[i], 'f');
        else if(strcmp(db->games[i]->teamB,team) == 0)
               printGame(db->games[i], 'b');
    }
}


void print(database* db)
{
    for(int i=0; i<db->size; ++i)
         printGame(db->games[i],'f');
}





