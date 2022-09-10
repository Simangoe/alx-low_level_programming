#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - enter function to decide number sign
 * Return: return 0
 */
int main(void)
{
char a = ('a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm');
char b = ('n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z');

for (int c = 1; c <= 13; c++)
{
putchar(a);
}
for (int d = 1; d <= 13; d++)
{
putchar(b);
}
return (0);
}
