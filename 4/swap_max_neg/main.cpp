#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "opArr.h"

// Swap maximal and last negative elements of array M(40)

int main()
{
    constexpr int SIZE = 40;
    srand (time(0));
    int M[SIZE];

    //fill array
    for(int i=0; i<SIZE; ++i)
    {
        M[i] = rand()%100-50;
        printf("%d ",M[i]);
    }

    replace(M, SIZE);

    printf("\n\n\n");
    for(int i=0; i<SIZE; ++i)
    {
        printf("%d ",M[i]);
    }
}
