#include "games.h"


Game* makeGame(const char* teamA, int goalsA, const char* teamB, int goalsB)
{
    Game* new_game   = new Game;
    new_game->teamA  = new char (strlen(teamA)+1);
    strcpy( new_game->teamA, teamA);
    new_game->teamB  = new char (strlen(teamB)+1);
    strcpy( new_game->teamB, teamB);
    new_game->goalsA = goalsA;
    new_game->goalsB = goalsB;
    return new_game;
}

int  removeGame(Game* game)
{
    if(game == nullptr)
    {
        printf("Can't remove empty structure\n");
        return 1;
    }
    delete[] game->teamA;
    delete[] game->teamB;
    delete game;
    printf("The game has been removed successfully\n");
    return 0;
}


void printGame(Game* game, char order)
{
    if(game == nullptr)
    {
        printf("Can't print empty structure\n");
        return;
    }
    if(order == 'f') //print as is if first team in search
    {
       printf("\n\"%s\" : \"%s\"\n", game->teamA,game->teamB);
       printf("  %d   --  %d\n", game->goalsA,game->goalsB);
       printf("\n");
    }
    else // reverse print order if second team in search
    {
       printf("\n\"%s\" : \"%s\"\n", game->teamB,game->teamA);
       printf("%d   --  %d\n", game->goalsB,game->goalsA);
       printf("\n");
    }
}

