#include "evenStr.h"
#include "gtest/gtest.h"

TEST (mkEvenStrtest,test1)
{
 char s[1024] = "do odo roto";
 char new_s[1024];
 mkEvenStr(s,new_s);
 EXPECT_STREQ (new_s, "do roto");
}

TEST (mkEvenStrtest,test2)
{
 char s[1024] = "dod odo roto";
 char new_s[1024];
 mkEvenStr(s,new_s);
 EXPECT_STREQ (new_s, "roto");
}

TEST (mkEvenStrtest,test3)
{
 char s[1024] = "dod";
 char new_s[1024];
 mkEvenStr(s,new_s);
 EXPECT_STREQ (new_s, "");
}


TEST (mkEvenStrtest,test4)
{
 char s[1024] = "d dod do d ort tort";
 char new_s[1024];
 mkEvenStr(s,new_s);
 EXPECT_STREQ (new_s, "do tort");
}

TEST (mkEvenStrtest,test5)
{
 char s[1024] = "do did done do do ";
 char new_s[1024];
 mkEvenStr(s,new_s);
 EXPECT_STREQ (new_s, "do done do do ");
}
