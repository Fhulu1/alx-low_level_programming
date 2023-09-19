#include "main.h"

/**
 * print_numbers - function will return single digits
 * Function will pring the single digit number
 * Return: Single digit number followed bt new line
 */

void print_numbers(void)
{
int num;

num = 0;

for (num = 0; num < 9; num++)
{
_putchar(num);
}

_putchar('\n');
}
