#include "childMax.h"


bool find( int* arr, int size, int child, int count )
{
    int added = arr[child]+count;
    return (added >= findMax(arr, size)) ? true : false;
}


int findMax(int* arr, int size)
{
   int max = 0;
   for (int i = 0; i < size; ++i)
       max = (arr[i] > max) ? arr[i] : max;
   return max;
}
