#include <stdio.h>
#include <string.h>
/**
 * string_toupper - function to reverse an array
 * @x: number of elements in array
 * Return: returns char *
 */
char *string_toupper(char *x)
{
int i;

while (*x)
{
*x = (islower(*x))? *x-32: *x;
x++;
}
return (x);
}
