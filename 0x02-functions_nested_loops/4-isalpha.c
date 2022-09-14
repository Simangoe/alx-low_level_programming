#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function to print alphabet in lower 10 times
 * @c: single letter input
 * Return: returns 0 (success)
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}

