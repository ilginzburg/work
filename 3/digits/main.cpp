#include <stdio.h>

// Calculate number of digits in natural number N

int main()
{
    int n;
    int sum=0;
    printf ("Please enter number N ");
    scanf("%d",&n);
    printf("Number %d ", n);
    while(n != 0)
    {
        n = n/10;
        ++sum;
    }
    printf("has %d digits\n", sum);
}

