#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _issuper - Checks for a digit (0 through 9)
 * @c: Parameter for the function to check
 * Return: returns 1 is success
 * returns 0 is fail
 */
int _isdigit(int c)
{
if (c <= 57 && c >= 48)
{
return (1);
}
else
{
return (0);
}
}
