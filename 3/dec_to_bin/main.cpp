#include <stdio.h>

// Converts number N from decimal to binary

int main()
{
    int n;
    int bin = 0;
    int k = 1;
    int res;
    printf ("Please enter number N ");
    scanf("%d",&n);

    while(n!=0)
    {
        bin +=n%2*k;
        n /=2;
        k *=10;
    }
   printf("Tne binary number is: %d\n",bin);
}
