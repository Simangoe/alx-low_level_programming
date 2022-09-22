#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - function to reverse an array
 * @x: number of elements in array
 * Return: returns char *
 */
char *string_toupper(char *x)
{
while (*x)
{
*x = (islower(*x))? *x-32: *x;
x++;
}
return (x);
}
