#include "main.h"

/**
 * str - function takes string and print every other character
 * puts2 - prints every other character of the string
 * Return: Every other character of a string
 */

void puts2(char *str)
{
int len;
int i;

len = 0;

while (str[len] != '\0')
{
len++;
}
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
