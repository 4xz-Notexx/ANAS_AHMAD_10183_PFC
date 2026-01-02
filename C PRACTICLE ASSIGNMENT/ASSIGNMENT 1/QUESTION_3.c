/*
Assignment 1 – Q3
Write a C program to demonstrate the difference between
++x (pre-increment) and x++ (post-increment).
*/

#include <stdio.h>

int main()
{
    int x = 5;

    printf("Pre-increment: %d\n", ++x);
    printf("Post-increment: %d\n", x++);
    printf("Final value of x: %d\n", x);

    return 0;
}
