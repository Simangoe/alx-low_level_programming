#include <stdio.h>
#include <math.h>
/**
 * squareroot - function that finds squareroot for next function
 * @a: incrementing number
 * @n: the number whose squareroot is to be found
 * Return: returns -1 if n does not have a natural square root
 */
int squareroot(int a, int n)
{
if (a * a == n)
{
return (a);
}
if (a * a > n)
{
return (-1);
}
else
{
return (squareroot(a + 1, n));
}
}
/**
 * _sqrt_recursion - function that returns the natural squareroot of a number
 * @n: the number whose squareroot is to be found
 * Return: returns -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (squareroot(1, n));
}
