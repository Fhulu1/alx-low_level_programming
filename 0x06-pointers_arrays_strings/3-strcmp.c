#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcmp: Function compares two strings
 * @s1: first input string
 * @s2: second input string
 * Function compares two strings
 * Return: function returns d
 */

int _strcmp(char *s1, char *s2)
{

while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
