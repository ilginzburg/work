#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Swap maximal and last negative elements of array M(40)

int main()
{

    constexpr int SIZE = 40;
    srand (time(0));
    int M[SIZE];
    int max_val_idx = 0;
    int last_neg_idx = 0;
    int tmp;

    //find max
    for(int i=0; i<SIZE; ++i)
    {
        M[i] = rand()%100-50;
        if(M[i] > M[max_val_idx])
            max_val_idx = i;
        printf("%d ",M[i]);
    }

    // find last negative val and replace
    for (int i=SIZE-1; i>=0; --i)
        {

            if(M[i] < 0){
                last_neg_idx = i;
                tmp = M[max_val_idx];
                M[max_val_idx] = M[last_neg_idx];
                M[last_neg_idx] = tmp;
                break;
            }

        }

    // print new array
    for(int i=0; i<SIZE; ++i)
    {
        printf("%d ",M[i]);
    }

}
