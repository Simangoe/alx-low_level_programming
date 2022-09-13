#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabet in lower 10 times
 * Return: returns 0 (success)
 */
void print_alphabet_x10(void)
{
int a = 1;
for (a = 1; a <= 10; a++)
{
int i = 'a';
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
