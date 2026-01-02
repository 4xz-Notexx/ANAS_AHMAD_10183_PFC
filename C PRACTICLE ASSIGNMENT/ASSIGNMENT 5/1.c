/*
Q1. Write a C program to read n elements into an array
and calculate the sum and average of the elements.
*/

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0, avg;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
