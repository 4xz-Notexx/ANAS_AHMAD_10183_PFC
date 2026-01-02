/*
Q3. Write a C program to count the number
of words in a given string.
*/

#include <stdio.h>

int main()
{
    char str[200];
    int i, count = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            count++;
    }

    printf("Number of words = %d", count);

    return 0;
}
