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

for (i = 0; src[i] != '\0'; i++)
{
for (j = 0; dest[j] != '\0'; j++, i++)
{
src[i] = dest[j];
}
src[i] = ('\0');
}
return (0);
}
