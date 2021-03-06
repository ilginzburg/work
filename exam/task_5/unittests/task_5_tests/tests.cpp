#include "maze.h"
#include "gtest/gtest.h"




TEST (findMinRoutel,test1)
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

    int const x_size = 5;
    int const y_size = 5;

    int* a_arr = new int[x_size*y_size];
    fillArray ((bool*)arr, (int*)a_arr, x_size, y_size, exit);

    printf("In the boolean array:\n\n");
    printArray ((bool*)arr, x_size, y_size);
    int f = find((int*)a_arr, x_size, y_size,  start,  exit );
    deleteArray ((int*)a_arr);
    EXPECT_EQ (f,1);
}


TEST (findMinRoutel,test2)
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

    exit.x = 3;
    exit.y = 1;

    int const x_size = 5;
    int const y_size = 5;

    int* a_arr = new int[x_size*y_size];
    fillArray ((bool*)arr, (int*)a_arr, x_size, y_size, exit);

    printf("In the boolean array:\n\n");
    printArray ((bool*)arr, x_size, y_size);
    int f = find((int*)a_arr, x_size, y_size,  start,  exit );
    deleteArray ((int*)a_arr);

    EXPECT_EQ (f,4);
}



TEST (findMinRoutel,test3)
{
    bool arr[5][5] = {{ true ,  true ,  false,  true , true  },
                      { false,  true ,  true ,  true , false },
                      { true ,  false,  true ,  true , true  },
                      { true ,  true ,  false,  true,  false },
                      { true ,  true,   true ,  true , true  }};
    Point start;
    Point exit;

    start.x = 0;
    start.y = 2;

    exit.x = 4;
    exit.y = 4;

    int const x_size = 5;
    int const y_size = 5;

    int* a_arr = new int[x_size*y_size];
    fillArray ((bool*)arr, (int*)a_arr, x_size, y_size, exit);

    printf("In the boolean array:\n\n");
    printArray ((bool*)arr, x_size, y_size);
    int f = find((int*)a_arr, x_size, y_size,  start,  exit );
    deleteArray ((int*)a_arr);

    EXPECT_EQ (f,6);
}
