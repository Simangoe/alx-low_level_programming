#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - add all arguments
 * @n: number of arguments
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int value = 0;

if (n != 0)
{
va_start(args, n);
for (i = 0; i < n; i++)
{
value = value + va_arg(args, int);
}
return (value);
}
return (0);
}
