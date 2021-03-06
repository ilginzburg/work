// Задача 5.
// Алгоритм A*.
// Дана матрица bool. Матрица представляет собой лабиринт.
// True — можно пройти.
// False — нельзя пройти.
// Дана начальная точка и точка выхода из лабиринта.
// Найти минимальное число шагов до выхода из лабиринта.

#include <stdio.h>
#include "maze.h"


int main()
{
    bool arr[5][5] = {{ true ,  true ,  false,  true , true  },
                      { false,  true ,  true ,  true , false },
                      { true ,  false,  true ,  true , true  },
                      { true ,  true ,  false,  true,  false },
                      { true ,  true,   true ,  true , true  }};
    int const x_size = 5;
    int const y_size = 5;

    Point start;
    Point exit;

    start.x = 0;
    start.y = 0;

    exit.x = 3;
    exit.y = 4;


    int* a_arr = new int[x_size*y_size];
    fillArray ((bool*)arr, (int*)a_arr, x_size, y_size, exit);

    printf("In the boolean array:\n");
    printArray ((bool*)arr, x_size, y_size);

    int f = find((int*)a_arr, x_size, y_size, start, exit);

    printf("\n\nThe minimal number of steps between (%d, %d) and (%d, %d) is %d\n"
              ,start.x, start.y,exit.x, exit.y,f);

    deleteArray ((int*)a_arr);
    printf("\nArray deleted\n");
    return 0;
}





