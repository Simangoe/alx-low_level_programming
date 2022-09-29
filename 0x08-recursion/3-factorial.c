#include <stdio.h>
/**
 * factorial - function that returns the factorial of n
 * @n: the number whose factorial is returned
 * Return: returns -1 when error or the factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
