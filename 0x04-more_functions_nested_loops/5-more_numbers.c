#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - 10 times the numbers, from 0 to 14
 * no Parameter for the function to check
 * Return: returns null type
 */
void more_numbers(void)
{
int a, i = 48, j = 57;
for (i = 48; i <= 57; i++)
{
_putchar(i);
}
for (i = 58; i <= 62; i++)
{
_putchar(1 + 10 / i);
}
_putchar('\n');
return;
}
