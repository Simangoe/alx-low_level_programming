#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function to print alphabet
 * Return: returns 0 (success)
 */
void print_alphabet(void)
{
int i = 'a';
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
