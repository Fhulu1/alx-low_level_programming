#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies bytes
 * @dest: memory area to copy bytes to
 * @src: memory area
 * @n: number of bytes to copy
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
