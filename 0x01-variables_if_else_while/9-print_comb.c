#include <stdio.h>
/**
 * main - entry into the program
 * Return: return 0 (success)
 */
int main(void)
{
int i = '0';
int j = '0';
for (i = '0'; i <= '9'; i++)
for (j = '0'; j <= '9';j++)
{
putchar(i);
putchar(44);
putchar(j);
putchar(32);
}
}
