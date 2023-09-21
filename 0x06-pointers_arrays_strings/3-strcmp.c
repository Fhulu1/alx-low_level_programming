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
int i, d;
d = 0;

while (d == 0)
{
if (s1[i] < s2[i])
d = -1;
else if (s1[i] > s2[i])
d = 1;

if (s1[i] == '\0')
break;

i++;
}
return (d);
}
