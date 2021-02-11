#include <stdio.h>
#include "parenth.h"

// Check if parentheses in string are in legal order and equal

int main()
{
    char s[32];
    printf("Enter string\n");
    scanf("%[^\n]%*c",s);
    checkPar(s) ? printf("\nYes\n") : printf("\nNo\n");
}
