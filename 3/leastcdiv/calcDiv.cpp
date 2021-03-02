#include "calcDiv.h"

int calclcDiv(int a, int b, int c)
{
    int n=2;
    while ((n<=a)&&(n<=b)&&(n<=c))
        {
             if(!((a%n)||(b%n)||(c%n)))
             {
                return n;
                break;
             }
             ++n;
        }
    return 1;
}
