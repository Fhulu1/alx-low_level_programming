#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets length of prefix substring
 * @s: initial segment
 * @accept: segment of string
 * Return: len
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
int i, j;

while (s[i] != ' ' && s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
len++;
j++;
}
i++;
j = 0;
}
return (len);
}
