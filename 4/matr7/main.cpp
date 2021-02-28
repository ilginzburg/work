#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "opMatrix.h"

// Replace k-th row with k-th column of 7x7 matrix
// Find if this matrix is symmetrical about its main diagonal

int main()
{


    constexpr int SIZE = 7;
    srand (time(0));
    int matrix[SIZE][SIZE];
    int k;

    for (int i=0; i<SIZE; ++i)
        for (int j=0; j<SIZE; ++j)
          {
            matrix[i][j] = rand()%100;
          }


    printf("\n\n\n\n");
    printMatrix  ((int*)matrix, SIZE);

    printf("\nPlease enter number from 0 to 6 K = ");
    scanf("%d",&k);
    printf("\n\n\n");

    replaceRowCol((int *)matrix, k, SIZE);


    printf("\n\n\n");

    printMatrix  ((int*)matrix, SIZE);

    printf("The new matrix is ");
    checkSymmetr((int *)matrix, SIZE) ? printf("") : printf("not ");
    printf("symmetric\n");

}
