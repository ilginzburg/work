#include "opMatrix.h"
#include <stdio.h>

void extractRow(int *matrix, int k, int SIZE, int *arr)
{
    for (int i=0; i<SIZE; ++i)
        *(arr+i) = *((matrix+k*SIZE) +i);
}


void extractCol(int *matrix, int k, int SIZE, int *arr)
{
    for (int i=0; i<SIZE; ++i)
        *(arr+i) = *((matrix+i*SIZE) +k);
}



void replaceRowCol(int *matrix, int *new_matrix, int k, int SIZE)
{
    int row[SIZE];
    extractRow(matrix, k, SIZE, row);
    int col[SIZE];
    extractCol(matrix, k, SIZE, col);

    for (int i=0; i<SIZE; ++i)
        for (int j=0; j<SIZE; ++j)
        {
            if(i==k)
            *((new_matrix+i*SIZE) +j) = *(col+j);
            else if(j==k)
            *((new_matrix+i*SIZE) +j) = *(row+i);
            else
            *((new_matrix+i*SIZE) +j) = *((matrix+i*SIZE) +j);
        }
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
