#include <stdio.h>
#include "calcDiv.h"

// Calculate Least Common Divisor of 3 natural numbers A,B,C

int main()
{
    int a;
    int b;
    int c;

    printf ("Please enter number A ");
    scanf("%d",&a);

    printf ("\nPlease enter number B ");
    scanf("%d",&b);

    printf ("\nPlease enter number C ");
    scanf("%d",&c);

    int cdiv = calclcDiv(a,b,c);

    printf("The Least Common Divisor is %d\n",cdiv);

}
