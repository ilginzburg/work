#include <stdio.h>


// Swap MSB and LSB of natural number N




int main()
{

    int n;
    int k = 10;
    int res = 1;
    int msb;
    int lsb;
    printf ("Please enter number N ");
    scanf("%d",&n);

// Number of digits

    while(true)
    {
        res = n/k;
        if(res == 0){
            k /=10;
            break;
        }
        k *=10;
    }

  msb = n/k;
  lsb = n%10;

   int swaped = lsb*k+((n-lsb+msb)%k);


   printf("Tne new number is: %d\n",swaped);


}
