#include "absendIdxs.h"
#include <stdio.h>

int findAbsndIdxs(int *a, int size_a, int *b, int size_b, int *c)
{
    bool found = false;
    int k = 0;
    for(int i=0; i<size_a; ++i)
        {
             for(int j=0; j<size_b; ++j)
                    {
                      if(a[i] == b[j])
                          found = true;
                     }
             if(!found)
             {
                c[k] = i;
                ++k;
             }
          found = false;
        }
    return k;
}



