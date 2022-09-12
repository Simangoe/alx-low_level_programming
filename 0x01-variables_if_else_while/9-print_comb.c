#include <stdio.h>
/**
 * main - entry into the program
 * Return: return 0 (success)
 */
int main(void)
{
int i = '0';
int j = 0;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
putchar(44);
putchar(32);
}
putchar(j);
return (0);
}
