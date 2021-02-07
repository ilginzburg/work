#include <stdio.h>

// Check if number of opened and closed parentheses in string is equal

int main()
{
    char s[1024];
    int op_count = 0;
    int cl_count = 0;

    printf("Enter string\n");
    scanf("%[^\n]%*c",s);

    for(int i=0; i < s[i]; ++i)
      {
        if(s[i] == '(')
            ++op_count;
        if(s[i] == ')')
            ++cl_count;
      }
    (op_count == cl_count) ? printf("\nYes\n") : printf("\nNo\n");
}
