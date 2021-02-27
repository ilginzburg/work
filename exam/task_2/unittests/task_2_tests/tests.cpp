#include "childMax.h"
#include "gtest/gtest.h"

TEST (findMaxChildtest,test1)
{
    const int size = 8;
    int arr[size] = {1, 0, 2, 5, 7, 2, 1, 10};
    int count = 3;
    int child = 2;
    EXPECT_FALSE (find(arr, size, child, count));
}

TEST (findMaxChildtest,test2)
{
    const int size = 10;
    int arr[size] = {1, 0, 12, 2, 5, 6, 7, 2, 1, 10};
    int count = 12;
    int child = 1;
    EXPECT_TRUE (find(arr, size, child, count));
}

TEST (findMaxChildtest,test3)
{
    const int size = 3;
    int arr[size] = {1, 0, 2};
    int count = 1;
    int child = 0;
    EXPECT_TRUE (find(arr, size, child, count));
}


TEST (findMaxChildtest,test4)
{
    const int size = 10;
    int arr[size] = {1, 0, 12, 2, 5, 6, 7, 2, 1, 10};
    int count = 11;
    int child = 1;
    EXPECT_FALSE (find(arr, size, child, count));
}
