#include "maxFigure.h"

// Find maximal area of 3 figures:
// 1) circle with radius r   (s = pi*r^2)
// 2) square with side   d   (s = d^2)
// 3) equilateral triangle with side a (s = (a^2)*(sqrt(3)/4))

int main()
{
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

    printf("\n\tThe figure of maximal area is:");

    findMaxFigure(r, d, a);
    printf("\n\n\n");

}
