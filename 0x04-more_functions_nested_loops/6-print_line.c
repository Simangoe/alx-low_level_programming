#include <stdio.h>
#include "main.h"
/**
 * print_line - print an underscore line of length n
 * @n:  Parameter for the function to check
 * Return: returns null type
 */
void print_line(int n)
{
int a = 48;
while (a <= n && a > 0)
{
_putchar(95);
a++;
}
_putchar('\n');
return;
}
