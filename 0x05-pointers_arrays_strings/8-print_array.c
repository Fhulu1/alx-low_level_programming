#include "main.h"
#include <stdio.h>

/**
 * print_array - will print the elements of an array
 * a - the pointer for the array
 * n - elements of the array
 * Return: prints elements of an array
 */

void print_array(int *a, int n)
{
int i;
*a = n;

for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", a[i]);
else
printf(",%d", a[i]);
}

printf("\n");
}
