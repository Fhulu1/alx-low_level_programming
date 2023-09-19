#include "main.h"
#include <stdio.h>

/**
 * The function will check for single digits
 * _isdigit - the function to check for single digits
 * c - integer
 * Return: function return 1 or 0
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))

return (1);

return (0);
}
