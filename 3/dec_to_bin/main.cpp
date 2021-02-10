#include <stdio.h>
#include "calcBin.h"

// Convert number N from decimal to binary

int main()
{
    int n;
    printf ("Please enter number N ");
    scanf("%d",&n);
    int bin = decToBin(n);
    printf("Tne binary number is: %d\n",bin);
}
