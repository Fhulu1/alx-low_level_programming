#include "main.h"
#include <stdio.h>

/**
 * Reserves a string
 * This functoion takes a string as an input and puts in a reserve
 * Return: String in reserve
 */

void rev_string(char *s)
{
int len, len1;
int i;
char tmp;

len = 0;
len1 = 0;

while (s[len] != '\0')
{
len++;
}

len1 = len - 1;

for (i = 0; i < len / 2; i++)
{
tmp = s[i];
s[i] = s[len1];
s[len1--] = tmp;
}

}
