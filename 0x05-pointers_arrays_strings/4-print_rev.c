#include <stdio.h>
#include "main.h"
/**
 * print_rev - a function that prints a string
 * @s: string input
 * Return: string
 */
void print_rev(char *s)
{
int i;
for (i = _strlen(s) - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
