#include <stdio.h>
#include "swapDigits.h"

// Swap MSB and LSB of natural number N

int main()
{
    int n;
    printf ("Please enter number N ");
    scanf("%d",&n);
    int swapped = swapDigits(n);
    printf("Tne new number is: %d\n",swapped);
}
