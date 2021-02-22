#ifndef GAMES_H
#define GAMES_H

#include <stdio.h>
#include <string.h>
struct Game
{
    char* teamA;
    int goalsA;
    char* teamB;
    int goalsB;
};


Game* makeGame(const char* teamA, int goalsA, const char* teamB, int goalsB);
int  removeGame(Game* game);
void printGame(Game* game, char order);



#endif // GAMES_H
