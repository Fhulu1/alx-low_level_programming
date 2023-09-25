#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints sum of diagonals of a square
 * @size: size of the diagonals
 * @a: an array
 * Return: sum of diagonals
 */

void print_diagsums(int *a, int size)
{
int sum1;
int sum2;
int j;

sum1 = 0;
sum2 = 0;

for (j = 0; j < size; j++)
{
sum1 = sum1 + a[j * size + j];
}
for (j = size - 1; j >= 0; j--)
{
sum2 += a[j * size + (size - j - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
