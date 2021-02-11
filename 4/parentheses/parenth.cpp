#include "parenth.h"


bool checkPar(char* s)
{
    int count = 0;
    for(int i=0; i < s[i]; ++i)
    {
      if(s[i] == '(')
      {
         ++count;
      }
      if(s[i] == ')')
      {
          if(count == 0)
          {
             return false;
          }
          else
             --count;
      }
    }
  return (count == 0);
}
