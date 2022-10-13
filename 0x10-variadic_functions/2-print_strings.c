#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print all arguments
 * @separator: string to separate arguments
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char * value;

va_start(args, n);
for (i = 0; i < n; i++)
{
value = va_arg(args, char *);
if (value != NULL)
{
if (i == n - 1 || separator == NULL)
{
printf("%s", value);
}
else
{
printf("%s%s", value, separator);
}
}
else
{
if (i == n - 1 || separator == NULL)
{
printf("nil");
}
else
{
printf("nil%s", separator);
}
}
}
printf("\n");
return;
}
