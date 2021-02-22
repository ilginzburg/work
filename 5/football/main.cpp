/*----------------------------------------------------------------------------
* Написать программу работы с результатами футбольных матчей.
* Программа должна давать возможность добавлять результат:
* какая команда с какой играла и результат.
* И программа должна иметь поиск по команде, с выводом всех матчей с ней.
* При этом при выводе название команды из запроса поиска должно быть первым.
* Программа должна сохранять базу на диск и считывать ее.
*-----------------------------------------------------------------------------
* Database to store results of football games
* with search by command name with print out of all found games.
* The name of the search command should be printed first.
*----------------------------------------
* | TEAM A | GOALS A | TEAM B | GOALS B |
*----------------------------------------
* |        |         |        |         |
*----------------------------------------
*/

#include "database.h"
#include "games.h"

int main()
{
    enum choice
    {
       Add    = 1,
       Remove = 2,
       Search = 3,
       Print  = 4,
       Quit   = 5
    };
    database db;
    int goalsA = 0;
    int goalsB = 0;
    int choice = 0;
    char teamA[1024];
    char teamB[1024];
    const char* db_file = "./../db.txt";

    memset(&db, 0, sizeof(db));
    read_from_file(&db, db_file );
    printf("\nWellcome to Football games list \n");

    while (choice != Quit)
    {
        printf("\nEnter your choice: \n");
        printf("  1 - Add,  2 - Remove,  3 - Search,  4 - Print,  5 - Quit ");
        scanf("%d",&choice);
        while(getchar()!='\n'); // clear input buffer
            switch (choice)
            {
              case(Add):
              case(Remove):
                      printf("Please enter the name of the first team: ");
                      gets(teamA);
                      printf("Please enter number of goals of the first team: ");
                      scanf("%d",&goalsA);
                      while(getchar()!='\n');
                      printf("Please enter the name of the second team: ");
                      gets(teamB);
                      printf("Please enter number of goals of the second team: ");
                      scanf("%d",&goalsB);
                      (choice == 1) ? add(&db,teamA,goalsA,teamB,goalsB):
                                      del(&db,teamA,goalsA,teamB,goalsB);
                      while(getchar()!='\n');
              break;
              case(Search):
                      printf("Please enter the name of the team: ");
                      gets(teamA);
                      find(&db,teamA);
              break;
              case(Print):
                      print(&db);
              break;
            }
      }
   write_to_file( &db, db_file );
   printf("Database file db_file.txt has been saved successfully\n");
   return 0;
}


