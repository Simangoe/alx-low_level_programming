#include <stdio.h>
#include "main.h"
/**
 * print_line - print an underscore line of length n
 * @n:  Parameter for the function to check
 * Return: returns null type
 */
void print_line(int n)
{
int a = 1;

while (a <= n && a >= 1)
{
putchar(95);
a++;
}
putchar(10);
return;
}
