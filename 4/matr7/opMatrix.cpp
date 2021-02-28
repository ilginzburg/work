#include "opMatrix.h"
#include <stdio.h>


void replaceRowCol(int* matrix, int k, int SIZE)
{
    for (int i=0; i<SIZE; ++i)
    swap(((matrix+i*SIZE) +k), ((matrix+k*SIZE) +i));
}


void swap(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}


bool checkSymmetr (int *new_matrix, int SIZE)
{
    for (int i=0; i<SIZE; ++i)
    {
        for (int j=0; j<SIZE; ++j)
        {
            if(*((new_matrix+i*SIZE) +j)  != *((new_matrix+j*SIZE) +i) )
                return false;
        }
    }
   return true;
}


void printMatrix  (int *matrix, int SIZE)
{
    for (int i=0; i<SIZE; ++i)
      {
        for (int j=0; j<SIZE; ++j)
            printf ("%2d ",*((matrix+i*SIZE) +j));
        printf("\n");
      }
}
