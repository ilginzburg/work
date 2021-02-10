#include "numDigits.h"
#include "gtest/gtest.h"

TEST (calcDigitstest,test1)
{
 int n = 0;
 int result = calcDigits(n);
 EXPECT_EQ (result, 1);
}

TEST (calcDigitstest,test2)
{
 int n = 1;
 int result = calcDigits(n);
 EXPECT_EQ (result, 1);
}


TEST (calcDigitstest,test3)
{
 int n = 10;
 int result = calcDigits(n);
 EXPECT_EQ (result, 2);
}

TEST (calcDigitstest,test4)
{
 int n = 345789;
 int result = calcDigits(n);
 EXPECT_EQ (result, 6);
}

TEST (calcDigitstest,test5)
{
 int n = 100;
 int result = calcDigits(n);
 EXPECT_EQ (result, 3);
}

