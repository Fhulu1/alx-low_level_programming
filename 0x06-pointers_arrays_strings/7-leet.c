#include "main.h"
#include <stdio.h>

/**
 * leet - funtion that will encode a string
 * Return: n value
 */

char *leet(char *n)
{
int i;
int j;
char s1[] = {'a','A','e','E','o','O','t','T','l','L'};
char s2[] = {'4','4','3','3','0','0','7','7','1'};

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
}
}
}
return (n);
}
