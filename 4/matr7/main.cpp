#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Replace k-th row with k-th column of 7x7 matrix
// Find if this matrix is symmetrical about its main diagonal


int main()
{

    constexpr int SIZE = 7;
    srand (time(0));
    int matrix[SIZE][SIZE];
    int new_matrix[SIZE][SIZE];
    int row[SIZE];
    int col[SIZE];
    int k;
    bool symmetric = true;


    for (int i=0; i<SIZE; ++i)
        for (int j=0; j<SIZE; ++j)
        {
            matrix[i][j] = rand()%100;
        }


    for (int i=0; i<SIZE; ++i)
    {
        for (int j=0; j<SIZE; ++j)
            printf ("%2d ",matrix[i][j]);
        printf("\n");
    }


    printf("\nPlease enter number from 0 to 6 K = ");
    scanf("%d",&k);


    printf("\n\n\n");

    for (int i=0; i<SIZE; ++i)
            row[i] = matrix[k][i];

    for (int i=0; i<SIZE; ++i)
            col[i] = matrix[i][k];


    for (int i=0; i<SIZE; ++i)
        for (int j=0; j<SIZE; ++j)
        {
            if(i==k)
            new_matrix[k][j] = col[j];
            else if(j==k)
            new_matrix[i][k] = row[i];
            else
            new_matrix[i][j] = matrix[i][j];
        }


    for (int i=0; i<SIZE; ++i)
    {
        for (int j=0; j<SIZE; ++j)
        {
            if(new_matrix[i][j] != new_matrix[j][i])
                symmetric = false;
            printf ("%2d ",new_matrix[i][j]);
        }
        printf("\n");
    }


    printf("The new matrix is ");
    symmetric ? printf("symmetric") : printf("not symmetric");
    printf("\n");


}
