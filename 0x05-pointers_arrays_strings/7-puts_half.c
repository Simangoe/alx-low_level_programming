#include <stdio.h>
#include "2-strlen.c"

/**
 * puts_half - puts half of int
 *
 * @str: string to split
 */
void puts_half(char *str)
{
int i;
int oI = 0;
if (_strlen(str) % 2 != 0)
{
oI += 1;
}
for (i = (_strlen(str) + oI) / 2; i < _strlen(str); i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
