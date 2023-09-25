#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function locates first occurance of a string
 * @s: first string
 * @accept: second string
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
int j;

while (*s)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
return ('\0');
}
