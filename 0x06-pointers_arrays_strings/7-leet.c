#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - function to capitalise first letter
 * @x: string to capitalise first letter
 * Return: return character string
 */
char *leet(char *x)
{
int i;
int y = strlen(x);

for (i = 1; i < y; i++)
{
if (isalpha(x[i]) == 97)
{
x[i] = 52;
}
else if (isalpha(x[i]) == 101)
{
x[i] = 51;
}
else if (isalpha(x[i]) == 111)
{
x[i] = 48;
}
else if (isalpha(x[i]) == 116)
{
x[i] = 55;
}
else if (isalpha(x[i]) == 108)
{
x[i] = 49;
}
}
return x;
}
