#include "parenth.h"
#include "gtest/gtest.h"

TEST (checkPartest,test1)
{
 char str[15] = "jh(jh)lkj";

 EXPECT_TRUE (checkPar(str));
}


TEST (checkPartest,test2)
{
 char str[15] = "j(h(jh)kjsdfj)";

 EXPECT_TRUE (checkPar(str));
}


TEST (checkPartest,test3)
{
 char str[15] = ")j(h(jh)kjdfj)";

 EXPECT_FALSE (checkPar(str));
}


TEST (checkPartest,test4)
{
 char str[15] = "())j(h(jh)kfj)";

 EXPECT_FALSE (checkPar(str));
}


TEST (checkPartest,test5)
{
 char str[20] = "((()))((h)(j)j)";

 EXPECT_TRUE (checkPar(str));
}

