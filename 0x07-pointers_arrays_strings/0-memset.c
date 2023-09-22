#include "main.h"
#include <stdio.h>

/**
 * *_memset - function that fills memory
 * @b: the constant byte
 * @s: memory area to store output
 * @n: the size of the memory area
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
{
for (i = 0; i < n; i++)
s[i] = b;
}
return (s);
}
