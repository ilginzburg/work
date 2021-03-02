#include "swapDigits.h"

int swapDigits(int n)
{
    int k = 10;
    int res = 1;
    int msb;
    int lsb;
    while(true)
    {
        res = n/k;
        if(res == 0)
        {
            k /=10;
            break;
        }
       k *=10;
    }

  msb = n/k;
  lsb = n%10;

  int swapped = lsb * k + ((n - lsb + msb) %k);
  return swapped;
}
