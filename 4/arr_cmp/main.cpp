#include "absendIdxs.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Find indexes of elements of array A(30) are absend in array B(15)

int main()
{
    constexpr int SIZE_A = 30;
    constexpr int SIZE_B = 15;
    int A[SIZE_A];
    int B[SIZE_B];
    int absendIdxs[SIZE_A];
    srand(time(0));

    for(int i=0; i<SIZE_A; ++i)
    {
       A[i] = rand()%100;
       printf("%d ",A[i]);
    }
    printf("\n");

    for(int i=0; i<SIZE_B; ++i)
    {
       B[i] = rand()%100;
       printf("%d ",B[i]);
    }
    printf("\n");

    int k = findAbsndIdxs(A, SIZE_A, B, SIZE_B, absendIdxs);
    for(int j=0; j<k; ++j)
        printf("%d ",absendIdxs[j]);
    printf("\n");
}
