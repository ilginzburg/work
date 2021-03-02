#include "maxFigure.h"


void findMaxFigure(double r, double d, double a, char * str)
{
    const double  pi = M_PI;
    double circArr   = pi*r*r;          //circle area
    double trianArr  = a*a*(sqrt(3)/4); //equi triangle area
    double sqArr     = d*d;             //square area

    sprintf (str,"%s",circArr > trianArr ?
                sqArr > circArr ?
                        "square"   : "circle"
    :  trianArr > sqArr ?
                        "triangle" : "square");
}





