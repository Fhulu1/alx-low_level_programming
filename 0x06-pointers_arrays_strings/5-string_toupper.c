#include "main.h"
#include <stdio.h>

/**
 * string_toupper: function returns string in uppercase
 * char * :input string
 * Return: The string in uppercase
 */

char *string_toupper(char *s)
{
int i;

while (*(s + i) != '\0')
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
*(s + i) = *(s + i) - 32;
}
i++;
}
return (s);
}
