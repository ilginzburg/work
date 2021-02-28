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
    Point start;
    Point exit;

    start.x = 0;
    start.y = 0;

    exit.x = 1;
    exit.y = 0;

    printf("In the boolean array:\n\n");
    printArray ((bool*)arr, 5, 5);
    int f = find((bool*)arr, 5, 5,  start,  exit );

    printf("\n\nThe minimal number of steps between (%d, %d) and (%d, %d) is %d\n"
              ,start.x, start.y,exit.x, exit.y,f);
    return 0;
}





