#include "main.h"
#include <stdio.h>

/**
 * _strspn - function locates first occurance of a string
 * @s: first string
 * @accept: second string
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
int j;

while (*s)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
return (*s);
}
s++;
}
return ('\0');
}
