#include "maxFigure.h"
#include "gtest/gtest.h"

TEST (maxFiguretest,test1)
{
 double r = 1;
 double a = 2;
 double d = 3;
 char str[15];
 findMaxFigure(r,  d,  a,  str);
 EXPECT_STREQ (str, "square");
}

TEST (maxFiguretest,test2)
{
 double r = 10;
 double a = 2;
 double d = 3;
 char str[15];
 findMaxFigure(r,  d,  a,  str);
 EXPECT_STREQ (str, "circle");
}


TEST (maxFiguretest,test3)
{
 double r = 1;
 double a = 20;
 double d = 3;
 char str[15];
 findMaxFigure(r,  d,  a,  str);
 EXPECT_STREQ (str, "triangle");
}

TEST (maxFiguretest,test4)
{
 double r = 0;
 double a = 0;
 double d = 0;
 char str[15];
 findMaxFigure(r,  d,  a,  str);
 EXPECT_STREQ (str, "square");
}


