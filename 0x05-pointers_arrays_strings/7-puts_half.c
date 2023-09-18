#include "main.h"

/**
 * This function splits second half of the string
 *
 * Return: Print the second half of the string
 */

void puts_half(char *str)
{
int i;
int n;
int len;

len = 0;

while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else if (len % 2)
{
for (n = (len - 1) / 2; n < len - 1; i++)
{
_putchar(str[n - 1]);
}

_putchar('\n');
}
}
