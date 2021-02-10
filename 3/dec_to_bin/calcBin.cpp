#include "calcBin.h"

int decToBin(int n)
{
    int bin = 0;
    int k = 1;
    while(n!=0)
    {
       bin += n%2*k;
       n /= 2;
       k *= 10;
    }
  return bin;
}
