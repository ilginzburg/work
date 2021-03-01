// Задача 1.
// Данн массив чисел. Каждое число в массиве
// встречается по 2 раза, кроме одного.
// Найти это одинокое число.
// int find( int* arr, int size );
// Примеры:
// [ 2, 1, 1, 2, 3] → 3

#include <stdio.h>
#include "findOne.h"

int main()
{
    const int size = 9;
    int arr[size] = {6,2,5,6,12,8,2,8,5};
    printf("the number is %d\n",find(arr,size));
    return 0;
}










