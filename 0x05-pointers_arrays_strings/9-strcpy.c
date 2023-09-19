#include "main.h"
#include <stdio.h>

/**
 * Function copies a string and returns to dest
 * dest - pointer where string is returned
 * _strcpy - function to copy string
 * src - pointer for string
 * Return: copies of the string
 */

char *_strcpy(char *dest, char *src)
{
int i;
int len;

len = 0;

while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len ; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
