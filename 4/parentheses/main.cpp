#include <stdio.h>

// Check if number of opened and closed parentheses in string is equal

int main()
{
    char s[32];
    int j = 0;
    bool isCorrect = true;

    printf("Enter string\n");
    scanf("%[^\n]%*c",s);

    for(int i=0; i < s[i]; ++i)
      {
        if(s[i] == '(')
        {
            if (j<i)
                j=i;
           for (j; j < s[j]; ++j)
            {
                if(s[j] == ')')
                {
                    isCorrect = true;
                    ++j;
                    break;
                }
              isCorrect = false;
            }
        }
      }

    j = sizeof(s);

    for(int i=sizeof(s); i >=0; --i)
      {
        if(s[i] == ')')
        {
            if (j>i)
                j=i;
           for (j; j >= 0; --j)
            {
                if(s[j] == '(')
                {
                    isCorrect = true;
                    --j;
                    break;
                }
              isCorrect = false;
            }
        }
      }

    isCorrect ? printf("\nYes\n") : printf("\nNo\n");
}
