#include <stdio.h>
#include "numDigits.h"

// Calculate number of digits in natural number N

int main()
{
    int n;
    printf ("Please enter number N ");
    scanf("%d",&n);
    int sum = calcDigits(n);
    printf("Number %d has %d digits\n", n, sum);

}

