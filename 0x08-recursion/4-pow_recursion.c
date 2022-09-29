#include <stdio.h>
/**
 * _pow_recursion - function that returns
 * the value of x raised to the power of y
 * @x: the base number
 * @y: The superscript number
 * Return: returns -1 if y is less than 0,
 * or the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, (y - 1)));
}
}
