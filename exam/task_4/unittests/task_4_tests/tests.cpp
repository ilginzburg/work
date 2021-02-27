#include "interval.h"
#include "gtest/gtest.h"

TEST (findInterval,test1)
{
    int k = 7;
    const int N = 7;
    int arr[N] = {2,5,6,6,8,2,5};
    for (int i = 0; i < N; ++i)
        printf("%d  ",arr[i]);
    Pair interval = find(arr, N, k );
    if(interval.first>N || interval.second>N)
        printf("\nInterval not found\n");
    else
        printf("\n\nthe interval is from %d to %d\n",interval.first, interval.second);
    EXPECT_EQ (interval.first,0);
    EXPECT_EQ (interval.second,1);
}


TEST (findInterval,test2)
{
    int k = 17;
    const int N = 7;
    int arr[N] = {2,5,6,6,8,2,5};
    for (int i = 0; i < N; ++i)
        printf("%d  ",arr[i]);
    Pair interval = find(arr, N, k );
    if(interval.first>N || interval.second>N)
        printf("\nInterval not found\n");
    else
        printf("\n\nthe interval is from %d to %d\n",interval.first, interval.second);
    EXPECT_EQ (interval.first,1);
    EXPECT_EQ (interval.second,3);
}



TEST (findInterval,test3)
{
    int k = 15;
    const int N = 7;
    int arr[N] = {2,5,6,6,8,2,5};
    for (int i = 0; i < N; ++i)
        printf("%d  ",arr[i]);
    Pair interval = find(arr, N, k );
    if(interval.first>N || interval.second>N)
        printf("\nInterval not found\n");
    else
        printf("\n\nthe interval is from %d to %d\n",interval.first, interval.second);
    EXPECT_EQ (interval.first,4);
    EXPECT_EQ (interval.second,6);
}
