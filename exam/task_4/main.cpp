// Задача 4.
// Дан массив длиной N.
// Массив состоит из целых чисел.
// Дано целое число K.
// Найти в этом массиве такой интервал,
// чтобы сумма элементов в нем равнялась K.

#include <stdio.h>
#include "interval.h"

int main()
{
    int k = 7;
    const int N = 7;
    int arr[N] = {2,5,6,6,8,2,5};
    for (int i = 0; i < N; ++i)
        printf("%d  ",arr[i]);
    Pair interval = find(arr, N, k );
    if(interval.first>N || interval.second>N)
        printf("\nInterval not found\n");
    else
        printf("\n\nthe interval is from %d to %d\n",interval.first, interval.second);
    return 0;
}





