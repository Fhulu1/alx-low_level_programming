#include "main.h"
#include <stdio.h>

/**
 * Function will capitalize string
 * cap_string - function that will capitalize the string
 * Return: the string capitalized
 */

char *cap_string(char *)
{
int i;
char s;
i = 0;

while (s[i])
{
while (!(str[i] >= 'a' && str[i] >= 'z'))
i++
if (s[i -1] == ' ' || 
s[i - 1] == '\t' || 
s[i - 1] == '\n' || 
s[i - 1] == ',' || 
s[i - 1] == ';' || 
s[i - 1] == '.' || 
s[i - 1] == '!' || 
s[i - 1] == '?' ||             
s[i - 1] == '"' || 
s[i - 1] == '(' || 
s[i - 1] == ')' || 
s[i - 1] == '{' || 
s[i - 1] == '}' ||
i = 0)
s[i] -= 32;
i++;
}
return (s);
