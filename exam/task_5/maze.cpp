#include "maze.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find (bool* arr, int x_size, int y_size, Point start, Point exit)
{
     int routes = 100;     // Number of routes to be found
     int steps_min   = 100;
     int steps   = 0;
     int start_x = start.x;
     int start_y = start.y;

     srand(time(NULL));
     int direction = 0;

    for(int k = routes; k > 0; --k)
    {
        while (!((start_x == exit.x) && (start_y == exit.y)))
        {
          direction = rand() % 4;
            switch (direction)
            {
                case(0):// right
                    if  ((start_x+1) < x_size)
                    {
                        if(*((arr+start_y*x_size)+start_x+1) == true)
                        {
                            start_x = start_x + 1;
                            ++steps;
                        }
                    }
                break;

                case(1):// down
                    if  ((start_y+1) < y_size)
                    {
                        if(*((arr+(start_y+1)*x_size)+start_x) == true)
                        {
                            start_y = start_y + 1;
                            ++steps;
                        }
                    }
                break;

                case(2):// left
                    if  ((start_x) > 0)
                    {
                        if(*((arr+start_y*x_size)+start_x-1) == true)
                        {
                            start_x = start_x - 1;
                            ++steps;
                        }
                    }
                break;

                case(3):// up
                    if  ((start_y) > 0)
                    {
                        if(*((arr+(start_y-1)*x_size)+start_x) == true)
                        {
                            start_y = start_y - 1;
                            ++steps;
                        }
                    }
            }//switch
        }
       steps_min = (steps < steps_min) ? steps : steps_min;
       steps = 0;
       start_x = start.x;
       start_y = start.y;
    }//for
 return steps_min;
}


void printArray (bool* arr, int x_size, int y_size)
{
    for(int i=0; i<x_size; ++i)
    {
        for(int j=0; j<y_size; ++j)
        {
            printf("%d ",*((arr+i*x_size)+j));
        }
      printf("\n");
    }
}





