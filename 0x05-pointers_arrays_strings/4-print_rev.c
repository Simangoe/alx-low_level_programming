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
for (s[i] = '\0'; s[i] >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
