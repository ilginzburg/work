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

    printf("In the boolean array:\n\n");
    printArray ((bool*)arr, 5, 5);
    int f = find((bool*)arr, 5, 5,  start,  exit );

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

    printf("In the boolean array:\n\n");
    printArray ((bool*)arr, 5, 5);
    int f = find((bool*)arr, 5, 5,  start,  exit );

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

    printf("In the boolean array:\n\n");
    printArray ((bool*)arr, 5, 5);
    int f = find((bool*)arr, 5, 5,  start,  exit );

    EXPECT_EQ (f,6);
}
