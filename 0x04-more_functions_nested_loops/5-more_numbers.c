#include "main.h"

/**
 * print numbers 1-14, 10 times.
 * more_numbers - the function to print the numbers
 * Return: numbers 10 times, between 1 -14
 */

void more_numbers(void)
{
int num1;
int num2;

for (num1 = 0; num1 < 10; num1++)
{
for (num2 = 0; num2 <= 14; num2++)
{
if (num2 > 9)
{
_putchar((num2 / 10) + '0');
}
_putchar((num2 % 10) + '0');
}
_putchar('\n');
}
}
