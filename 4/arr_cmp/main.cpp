#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Find indexes of elements of array A(30) are absend in array B(15)

int main()
{
    constexpr int SIZE_A = 30;
    constexpr int SIZE_B = 15;
    srand (time(0));
    int A[SIZE_A];
    int B[SIZE_B];
    bool found = false;
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
    //find indexes
    for(int i=0; i<SIZE_A; ++i)
        {
             for(int j=0; j<SIZE_B; ++j)
                    {
                      if(A[i] == B[j])
                          found = true;
                     }
             !found ? printf("%d ",i) : printf("");
             found = false;
        }
  printf("\n");
}
