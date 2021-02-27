#include "findMinToSum.h"

int find( int N )
{
    int largest = 0;
    while(N)
    {
        int r = N % 10;
        largest = (r > largest) ? r : largest;
        N /= 10;
    }
    return largest;
}
