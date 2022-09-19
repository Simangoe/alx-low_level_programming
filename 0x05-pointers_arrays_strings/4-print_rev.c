#include <stdio.h>
#include "main.h"
/**
 * _print_rev - a function that prints a string
 * @s: string input
 * Return: string
 */
void print_rev(char *s)
{
int i;
while (s[i] < '\0' && s[i] > 0)
{
_putchar(s[i]);
 i--;
}
_putchar('\n');
}
