#include "main.h"
#include <stdio.h>

/**
 * _strchr - function locates a string
 * @s: the string
 *@c: character to locate in the string
 * Return: s
 */

char *_strchr(char *s, char c)
{
if (*s == '\0')
return (s);
while (*s++)
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
return (s);
return('\0');
}
