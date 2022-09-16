#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _issuper - Checks whether a character c is upper or lower case
 * @c: parameter for the function
 * Return: returns 1 is character c is uper case, otherwise returns 0
 */
int _isupper(int c)
{
if (c <= 90 && c >= 65)
{
return (1);
}
else
{
return (0);
}
}
