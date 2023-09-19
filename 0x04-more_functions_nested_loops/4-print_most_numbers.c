#include "main.h"

/**
 * print_most_numbers - function to print numbers expect a number
 * Return:single digits, followed by a new line 
 */

void print_most_numbers(void)
{
int num;

num = 0;

for (num = 48; num < 58; num++)
{
if ((num == 50) || (num == 52))
{
continue;
}
_putchar(num);
}
_putchar('\n');
}
