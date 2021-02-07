#include <stdio.h>
// Remove odd length words from the string

int main()
{
    int char_count = 0;
    int k = 0;
    char s[1024];
    char new_s[1024];

    printf("Enter string\n");
    scanf("%[^\n]%*c",s);

    for(int i=0; i < (int)sizeof(s); ++i)
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
    new_s[k] = '\0';
    printf("\n%s\n",new_s);
}
