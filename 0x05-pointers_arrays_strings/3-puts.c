#include "main.h"

/**
 * @str - a pointer fo string to be printed
 *  Function takes in a string as input and then prints out to standand output.
 * (stdout) followed by new line '\n'
 *
 * Returns: Function prints a string
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
puts(str[i]);
}
puts('\n');
}
