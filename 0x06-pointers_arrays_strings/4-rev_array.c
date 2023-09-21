#include "main.h"
#include <stdio.h>

/**
 * reserve_array - function will print array in reverse
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: array in reserve
 */

void reverse_array(int *a, int n)
{
int i;
int j;

for (i = 0; i < n--; i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
