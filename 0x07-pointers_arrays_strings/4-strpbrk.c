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
while (accept[j] != '\0')
{
if (*s == accept[j])
j++;
}
j = 0;
s++;
}
return (*s);
}

