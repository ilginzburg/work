#include "findOne.h"
#include "gtest/gtest.h"

TEST (findOnetest,test1)
{
    const int size = 9;
    int arr[size] = {6,2,5,6,12,8,2,8,5};
    EXPECT_EQ (find(arr,size), 12);
}

TEST (findOnetest,test2)
{
    const int size = 11;
    int arr[size] = {12,6,2,5,5,6,12,8,2,8,3};
    EXPECT_EQ (find(arr,size), 3);
}


TEST (findOnetest,test3)
{
    const int size = 3;
    int arr[size] = {0,1,0};
    EXPECT_EQ (find(arr,size), 1);
}
