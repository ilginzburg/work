#include "maze.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find (int* a_arr, int x_size, int y_size, Point start, Point exit)
{
    if(*((a_arr+start.y*x_size)+start.x) == -2)
        return 0;
    int steps = 1;
    *((a_arr+start.y*x_size)+start.x) = steps;
    while (steps < x_size*y_size)
    {
        for(int i=0; i<x_size; ++i)
        {
            for(int j=0; j<y_size; ++j)
            {
              if(*((a_arr+i*x_size)+j) == steps)
                {
                    if(((j+1) < x_size) &&(*((a_arr+i*x_size)+j+1) == -2)) //right
                        return steps;
                    if(((j+1) < x_size) &&(*((a_arr+i*x_size)+j+1) == 0))
                        *((a_arr+i*x_size)+j+1) = steps + 1;

                    if((j>0) &&(*((a_arr+i*x_size)+j-1) == -2)) //left
                        return steps;
                    if((j>0) &&(*((a_arr+i*x_size)+j-1) == 0))
                        *((a_arr+i*x_size)+j-1) = steps + 1;

                    if((i>0) &&(*((a_arr+(i-1)*x_size)+j) == -2)) //up
                        return steps;
                    if((i>0) &&(*((a_arr+(i-1)*x_size)+j) == 0))
                        *((a_arr+(i-1)*x_size)+j) = steps + 1;

                    if(((i+1) < y_size) &&(*((a_arr+(i+1)*x_size)+j) == -2)) //down
                        return steps;
                    if(((i+1) < y_size) &&(*((a_arr+(i+1)*x_size)+j) == 0))
                        *((a_arr+(i+1)*x_size)+j) = steps + 1;
                }
            }
         }//for
        ++steps;
     }//while
 return steps;
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


void printAstarArray (int* arr, int x_size, int y_size)
{
    for(int i=0; i<x_size; ++i)
    {
        for(int j=0; j<y_size; ++j)
        {
            printf("%d  ",*((arr+i*x_size)+j));
        }
      printf("\n");
    }
}



void fillArray (bool* arr, int* a_arr, int x_size, int y_size, Point exit)
{
    for(int i=0; i<x_size; ++i)
        for(int j=0; j<y_size; ++j)
           *((a_arr+i*x_size)+j) = *((arr+i*x_size)+j) ? 0 : -1;
    *((a_arr+exit.y*x_size)+exit.x) = -2; // exit point
}


void deleteArray (int* a_arr)
{
    delete[] a_arr;
}

