#include <stdio.h>
#include "main.h"
/**
 * print_square - Print a square of size
 * @size: parameter for the function to check
 * Return: returns null type
 */
void print_square(int size)
{
int i = 1;
while (i >= 1 && i <= size)
{
int j = 1;
for (j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar(10);
i++;
}
return;
}
