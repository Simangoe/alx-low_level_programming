#include <stdio.h>
#include "main.h"
/**
 * more_numbers - 10 times the numbers, from 0 to 14
 * no Parameter for the function to check
 * Return: returns null type
 */
void more_numbers(void)
{
int i, j;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (j = 48; j <= 52; j++)
{
putchar(49);
putchar(j);
}
putchar('\n');
return;
}
