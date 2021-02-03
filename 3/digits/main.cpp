#include <stdio.h>

// Calculate number of digits in natural number N

int main()
{
    int n;
    int sum=0;
    int res = 1;
    int k = 10;
    printf ("Please enter number N ");
    scanf("%d",&n);

    while(res != 0)
    {
        res = n/k;
        ++sum;
        k *=10;
    }

    printf("Number %d has %d digits\n", n, sum);
}

