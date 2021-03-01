
#include "findOne.h"

int find( int* arr, int size )
{
    int lonely_number = 0;
    for (int i=0; i<size; ++i)
    {
        lonely_number ^= arr[i];
    }
  return lonely_number;
}
