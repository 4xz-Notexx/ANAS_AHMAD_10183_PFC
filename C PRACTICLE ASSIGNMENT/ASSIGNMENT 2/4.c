/*
Assignment 2 – Q4
Write a C program using assignment operators
to update bank balance.
*/

#include <stdio.h>

int main()
{
    float balance;

    printf("Enter initial balance: ");
    scanf("%f", &balance);

    balance += 500;
    printf("After adding interest: %.2f\n", balance);

    balance -= 100;
    printf("After maintenance charge: %.2f\n", balance);

    balance *= 1.1;
    printf("After bonus: %.2f\n", balance);

    balance /= 2;
    printf("After division: %.2f\n", balance);

    return 0;
}
