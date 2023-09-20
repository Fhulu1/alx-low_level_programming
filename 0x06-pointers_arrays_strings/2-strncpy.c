#include "main.h"
#include <stdio.h>

/**
 * Function to copy string
 * @_strncpy: Function to copy string
 * @dest: character for function
 * @src: character for function
 * Return: this is the return
 */

char *_strncpy(char *dest, char *src, int n)
{
if (dest == NULL)
return (NULL);

while (src[n] != '\0')
{
dest[n] = src[n];
n++;
}
dest[n] = '\0';

return (dest);
}
