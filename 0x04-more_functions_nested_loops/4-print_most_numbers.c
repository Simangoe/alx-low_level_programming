#include <stdio.h>
#include "mi_info.h"
/**
 * print_most_numbers - print numbers from 0 to 9 excluding 2 and 4
 * no Parameter for the function to check
 * Return: returns null type
 */
void print_most_numbers(void)
{
int i = 0;
for (i = 48; i <= 57; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar('\n');
return;
}
