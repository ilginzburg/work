#include "calcBin.h"
#include "gtest/gtest.h"

TEST (decToBintest,test1)
{
 int n = 0;
 int r = decToBin(n);
 EXPECT_EQ (r, 0);
}

TEST (decToBintest,test2)
{
 int n = 1;
 int r = decToBin(n);
 EXPECT_EQ (r, 1);
}

TEST (decToBintest,test3)
{
 int n = 6;
 int r = decToBin(n);
 EXPECT_EQ (r, 110);
}

TEST (decToBintest,test4)
{
 int n = 12;
 int r = decToBin(n);
 EXPECT_EQ (r, 1100);
}
