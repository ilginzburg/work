#include "calcDiv.h"
#include "gtest/gtest.h"

TEST (calclcDivtest,test1)
{
 int a = 1;
 int b = 1;
 int c = 1;
 EXPECT_EQ (calclcDiv(a,b,c), 1);
}


TEST (calclcDivtest,test2)
{
 int a = 2;
 int b = 6;
 int c = 10;
 EXPECT_EQ (calclcDiv(a,b,c), 2);
}


TEST (calclcDivtest,test3)
{
 int a = 7;
 int b = 14;
 int c = 21;
 EXPECT_EQ (calclcDiv(a,b,c), 7);
}



TEST (calclcDivtest,test4)
{
 int a = 42;
 int b = 14;
 int c = 28;
 EXPECT_EQ (calclcDiv(a,b,c), 2);
}





TEST (calclcDivtest,test5)
{
 int a = 10;
 int b = 100;
 int c = 1000;
 EXPECT_EQ (calclcDiv(a,b,c), 2);
}
