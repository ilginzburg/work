#include "opMatrix.h"
#include "gtest/gtest.h"

TEST (replaceRowColtest,test1)
{
 int k = 2;
 int SIZE = 7;
 int matrix[7][7] = {{1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7},
                     {13,23,12,43,53,63,73},
                     {1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7}};

 replaceRowCol((int*)matrix,  k, SIZE);
 EXPECT_EQ (matrix[2][0], 12);
}


TEST (replaceRowColtest,test2)
{
 int k = 3;
 int SIZE = 7;
 int matrix[7][7] = {{1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7},
                     {13,23,12,43,53,63,73},
                     {1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7}};

 replaceRowCol((int*)matrix,  k, SIZE);
 EXPECT_EQ (matrix[0][3], 1);
}



TEST (replaceRowColtest,test3)
{
 int k = 6;
 int SIZE = 7;
 int matrix[7][7] = {{1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7},
                     {13,23,12,43,53,63,73},
                     {1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7},
                     {1,2,12,4,5,6,7}};

 replaceRowCol((int*)matrix, k, SIZE);
 EXPECT_EQ (matrix[1][6], 2);
}


