#include "main.h"

/**
 * print_numbers - function will return single digits
 * Function will pring the single digit number
 * Return: Single digit number followed bt new line
 */

void print_numbers(void)
{
int num;

num = 48;

for (num = 48; num < 58; num++)
{
_putchar(num);
}

_putchar('\n');
}
