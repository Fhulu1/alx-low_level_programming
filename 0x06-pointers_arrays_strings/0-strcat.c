#include "main.h"
#include <stdio.h>

/**
 * This function concatenates strings
 * _strcat: function to concatenate the string
 * dest: pointer returning the string
 * src: string
 * Return: src and dest string concatenate
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++)
{
for (j = 0; src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
dest[i] = ('\0');
}
return (dest);
}
