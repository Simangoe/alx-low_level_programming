#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string to write to stdout
 * Return: void
 */
void _puts_recursion(char *s)
{
int lenofs = strlen(s);

if (*s == lenofs)
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
