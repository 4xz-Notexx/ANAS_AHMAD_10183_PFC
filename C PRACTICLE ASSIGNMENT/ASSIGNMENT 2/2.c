/*
Assignment 2 – Q2
Write a C program to compare two numbers without using
conditional statements.
*/

#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("a == b : %d\n", a == b);
    printf("a > b  : %d\n", a > b);
    printf("b > a  : %d\n", b > a);

    return 0;
}
