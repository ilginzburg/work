#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

// This program finds figure with maximal area between 3:
// 1) circle with radius r   (s = pi*r^2)
// 2) square with side   d   (s = d^2)
// 3) equilateral triangle with side a. (s = (a^2)*(sqrt(3)/4))



int main()
{
    const double  pi = M_PI;
    double r;
    double d;
    double a;

    printf("Please enter radius  ");
    scanf(" %lf", &r);
    printf("\n\tRadius r = %f\n\n",r);

    printf("Please enter square side  ");
    scanf(" %lf", &d);
    printf("\n\tSquare side = %f\n\n",d);

    printf("Please enter triangle side  ");
    scanf(" %lf", &a);
    printf("\n\tTriangle side = %f\n\n",a);

    printf ("The figure of maximal area is a ");


    (pi*r*r) > (a*a*(sqrt(3)/4)) ?
                d*d > (pi*r*r) ?
                    printf ("square.\n\n") : printf ("circle.\n\n")
    :  (a*a*(sqrt(3)/4)) > d*d ?
                        printf ("triangle.\n\n") : printf ("square.\n\n");
}
