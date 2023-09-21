#include "main.h"
#include <stdio.h>

/**
 * print_array: function will print array in reverse
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
int i, b, c;

i = 0;
b = n - 1;
while (b < c)
{
i = *(a + b);
*(a + b) = *(a + c);
*(a + c) = i;
b++;
c--;
}
}
