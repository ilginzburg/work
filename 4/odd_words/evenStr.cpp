#include "evenStr.h"

void mkEvenStr(char *s, char *new_s)
{
    int char_count = 0;
    int k = 0;
    new_s[0] = '\0';
    for(int i=0; i < 1024; ++i)
      {
        ++char_count;
       if((s[i] == ' ') || (s[i] == '\0'))
        {
           if((char_count & 0x1) == 1)
            {
                for(int j = 1; j<char_count; ++j)
                   {
                      new_s[k] = s[i-char_count+j];
                      ++k;
                   }
               new_s[k] = ' ';
               ++k;
            }
            char_count = 0;
            if(s[i] == '\0')
                break;
        }
    }
    if(k>0)
      new_s[k-1] = '\0';
}
