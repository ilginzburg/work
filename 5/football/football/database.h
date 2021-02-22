#ifndef DATABASE_H
#define DATABASE_H
#include "games.h"

struct database
{
    Game** games;
    int size;
};



void read_from_file(database* db, const char* db_file);
void write_to_file(database*  db, const char* db_file);
int closeFile(FILE *db_file);

int  add(database*   db, const char* teamA, int goalsA, const char* teamB, int goalsB);
int  del(database*   db, const char* teamA, int goalsA, const char* teamB, int goalsB);
void find(database*  db, const char* team);
void print(database* db);

#endif // DATABASE_H
