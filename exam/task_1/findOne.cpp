
#include "findOne.h"

int find( int* arr, int size )
{
    InsertSort(arr,size);
    for (int i=0; i<size-1;)
    {
        if(arr[i] == arr[i+1])
            i += 2;
        else
            return arr[i];
    }
  return arr[size-1];
}

void InsertSort(int* arr, int size)
{
    int key;
    int j;
    for (int i=1; i<size; ++i)
    {
        key = arr[i];
        j = i - 1;
        while ((arr[j] > key) && (j >= 0))
        {
            arr[j+1] = arr[j];
            --j;
        }
       arr[j+1] = key;
    }
}
