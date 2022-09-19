#include <stdio.h>
/**
 * swap_int - function to swap values
 * @a: parameter 1
 * @b: swap parameter
 * Return: return null value
 */
void swap_int(int *a, int *b)
{
*a = b;
*b = a;
return;
}
