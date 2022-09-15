#include <stdio.h>
#include "main.h"
/**
 * print_line - print an underscore line of length n
 * @n: @n:  Parameter for the function to check
 * Return: returns null type
 */
void print_line(int n)
{
int a;
while (a <= n && a > 0)
{
_putchar('_');
a++;
}
_putchar('\n');
return;
}
