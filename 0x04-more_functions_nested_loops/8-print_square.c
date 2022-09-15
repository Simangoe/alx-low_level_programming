#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - 10 times the numbers, from 0 to 14
 * no Parameter for the function to check
 * Return: returns null type
 */
void print_square(int size)
{
int i = 1;
while (i >= 1 && i <= size)
{
for (int j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar(10);
i++;
}
return;
}
