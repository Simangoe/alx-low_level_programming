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
int i;
int y = strlen(x);

for (i = 1; i < y; i++)
{
if (isalpha(x[i]))
{
x[i] = toupper(x[i]);
}
}
return (x);
}
