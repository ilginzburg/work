#include "opArr.h"

int findMaxIdx(int *arr, int size)
{
    int max_val_idx = 0;
    for (int i=0; i<size; ++i)
    {
        if(arr[i] > arr[max_val_idx])
            max_val_idx = i;
    }
    return max_val_idx;
}

int findLastNegIdx(int *arr, int size)
{
    for (int i=size-1; i>=0; --i)
        {
            if(arr[i] < 0)
            {
                return i;
                break;
            }

        }
    return -1;
}

void replace(int *arr, int size)
{
    int tmp;
    tmp = arr[findMaxIdx(arr,size)];
    arr[findMaxIdx(arr,size)] = arr[findLastNegIdx(arr,size)];
    arr[findLastNegIdx(arr,size)] = tmp;
}

