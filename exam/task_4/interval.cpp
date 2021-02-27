#include "interval.h"

Pair find( int* arr, int N, int k )
{
    Pair pair;
    pair.first  = N+1; // indicate not found
    pair.second = N+1;
    int sum = 0;
    for (int i = 0; i < N; ++i){
        for (int j = i; j < N; ++j)
        {
            sum += arr[j];
            if(sum == k)
            {
                pair.first = i;
                pair.second = j;
                return pair;
            }
        }
       sum = 0;
    }
    return pair;
}


