#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

// This program calculates expression:
// Y = ((2cos(x-pi/6) + sqrt(2)) / (1/2lnx + sin^2(x^2))) e^3x

int main()
{
    const double  pi = M_PI;
    double x;
    double y;

    printf("Please enter x ");
    scanf("%lf", &x);
    printf("\n\tX = %f\n",x);

    y = (2*cos(x-pi/6) + sqrt(2))*exp(3*x) / (1/(2*log(x)) + pow (sin( pow (x , 2)) , 2));
    printf("\n\tY = %f\n\n",y);
}
