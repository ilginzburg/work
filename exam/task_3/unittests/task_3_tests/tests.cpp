#include "findMinToSum.h"
#include "gtest/gtest.h"

TEST (findMinToSum,test1)
{
    int N = 8327;
    EXPECT_EQ (find(N),8);
}


TEST (findMinToSum,test2)
{
    int N = 78463;
    EXPECT_EQ (find(N),8);
}

TEST (findMinToSum,test3)
{
    int N = 327;
    EXPECT_EQ (find(N),7);
}

TEST (findMinToSum,test4)
{
    int N = 8927;
    EXPECT_EQ (find(N),9);
}

TEST (findMinToSum,test5)
{
    int N = 83278;
    EXPECT_EQ (find(N),8);
}
