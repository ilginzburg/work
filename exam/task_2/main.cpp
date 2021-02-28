//Задача 2.
//Есть несколько детей, у каждого ребенка есть
//некоторое число конфет. Число конфет у детей задается массивом.
//Так же есть некоторое число дополнительных конфет.
//Требуется определить, если указанному ребенку отдать
//все дополнительные конфеты, то будет ли у него их максимальное количество.
//bool find( int* arr, int size, int child, int count );

//Примеры:
//[ 1, 2, 5, 2, 1], дополнительные конфеты 3.
//Результаты по детям: false, true, true, true, false

#include "childMax.h"
#include <stdio.h>


int main()
{
    const int size = 3;
    int arr[size] = {1, 0, 2};
    int count = 1;
    int child = 0;
    printf("\nthe number is %d\n",find(arr, size, child, count));

    for (int i = 0; i < size; ++i)
        printf("%d  ",arr[i]);

 return 0;
}





