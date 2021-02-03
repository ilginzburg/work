#include <stdio.h>

// Calculate Least Common Divisor of 3 natural numbers A,B,C

int main()
{
    int a;
    int b;
    int c;
    int n=2;
    bool found = false;

    printf ("Please enter number A ");
    scanf("%d",&a);

    printf ("\nPlease enter number B ");
    scanf("%d",&b);

    printf ("\nPlease enter number C ");
    scanf("%d",&c);

while ((n<=a)&&(n<=b)&&(n<=c))
{

    if(!((a%n)||(b%n)||(c%n))){
                 found = true;
              break;
    }
    ++n;
}


printf("The Least Common Divisor is %d\n",found?n:1 );

}
