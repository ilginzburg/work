#include "numDigits.h"

int calcDigits(int n)
{
     if (n==0)
        n = 1;
     int sum = 0;
     while(n != 0)
     {
         n /=10;
         ++sum;
     }
     return sum;
}
