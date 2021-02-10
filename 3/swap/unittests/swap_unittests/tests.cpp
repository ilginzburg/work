#include "swapDigits.h"
#include "gtest/gtest.h"

TEST (swapDigitstest,test1)
{
 EXPECT_EQ (swapDigits(0), 0);
}

TEST (swapDigitstest,test2)
{
 EXPECT_EQ (swapDigits(1), 1);
}

TEST (swapDigitstest,test3)
{
 EXPECT_EQ (swapDigits(123), 321);
}

TEST (swapDigitstest,test4)
{
 EXPECT_EQ (swapDigits(4567894), 4567894);
}

TEST (swapDigitstest,test5)
{
 EXPECT_EQ (swapDigits(590871), 190875);
}

TEST (swapDigitstest,test6)
{
 EXPECT_EQ (swapDigits(100), 1);
}

