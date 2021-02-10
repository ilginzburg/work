#include "opArr.h"
#include "gtest/gtest.h"

TEST (replacetest,test1)
{
 int arr[5] = {2,100,3,-7,0};
 replace(arr, 5);
 EXPECT_EQ (arr[0], 2);
 EXPECT_EQ (arr[1], -7);
 EXPECT_EQ (arr[2], 3);
 EXPECT_EQ (arr[3], 100);
 EXPECT_EQ (arr[4], 0);
}



TEST (replacetest,test2)
{
 int arr[5] = {2,100,3,7,-10};
 replace(arr, 5);
 EXPECT_EQ (arr[0], 2);
 EXPECT_EQ (arr[1], -10);
 EXPECT_EQ (arr[2], 3);
 EXPECT_EQ (arr[3], 7);
 EXPECT_EQ (arr[4], 100);
}


TEST (replacetest,test3)
{
 int arr[5] = {20,1,-3,7,3};
 replace(arr, 5);
 EXPECT_EQ (arr[0], -3);
 EXPECT_EQ (arr[1], 1);
 EXPECT_EQ (arr[2], 20);
 EXPECT_EQ (arr[3], 7);
 EXPECT_EQ (arr[4], 3);
}
