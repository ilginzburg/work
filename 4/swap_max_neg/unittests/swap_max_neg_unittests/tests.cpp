#include "opArr.h"
#include "gtest/gtest.h"

TEST (replacetest,test1)
{
    int arr[5] = {2,100,3,-7,0};
    int new_arr[5] = {2,-7,3,100,0};
    replace(arr, 5);
    EXPECT_EQ (memcmp(arr,new_arr,5), 0);
}

TEST (replacetest,test2)
{
    int arr[5] = {2,100,3,7,-10};
    replace(arr, 5);
    int new_arr[5] = {2,-10,3,7,100};
    EXPECT_EQ (memcmp(arr,new_arr,5), 0);
}


TEST (replacetest,test3)
{
    int arr[5] = {20,1,-3,7,3};
    replace(arr, 5);
    int new_arr[5] = {-3,1,20,7,3};
    EXPECT_EQ (memcmp(arr,new_arr,5), 0);
}
