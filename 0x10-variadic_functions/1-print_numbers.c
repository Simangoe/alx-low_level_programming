#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print all arguments
 * @separator: string to separate arguments
 * @n: number of arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i, value;

va_start(args, n);
for (i = 0; i < n; i++)
{
value = va_arg(args, int);
if (i == n - 1 || separator == NULL)
{
printf("%d", value);
}
else
{
printf("%d%s", value, separator);
}
}
printf("\n");
return;
}
