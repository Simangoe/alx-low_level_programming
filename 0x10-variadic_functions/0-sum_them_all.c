#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - add all arguments
 * @n: number of arguments
 * @...: rest of arguments
 * Return: sum of arguments, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
signed int value = 0;

if (n == 0)
{
return (0);
}
va_start(args, n);
for (i = 0; i < n; i++)
{
value = value + va_arg(args, signed int);
}
va_end(args);
return (value);
}
