/*
Q11. Palindromic String Analyzer
Accept strings, check for palindromes, and reverse them.
*/

#include <stdio.h>
#include <string.h>

void reverseString(char str[], char rev[])
{
    int i, len;
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
}

int main()
{
    char str[100], rev[100];

    printf("Enter a string: ");
    gets(str); 

    reverseString(str, rev);

    printf("\nOriginal String : %s", str);
    printf("\nReversed String : %s", rev);

    if (strcmp(str, rev) == 0)
    {
        printf("\nResult : The string is a PALINDROME");
    }
    else
    {
        printf("\nResult : The string is NOT a PALINDROME");
    }

    return 0;
}

