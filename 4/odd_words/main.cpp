#include <stdio.h>
#include "evenStr.h"


// Remove odd length words from the string

int main()
{
    char s[1024];
    char new_s[1024];
    printf("Enter string\n");
    scanf("%[^\n]%*c",s);

    mkEvenStr(s,new_s);
    printf("\n%s\n",new_s);
}
