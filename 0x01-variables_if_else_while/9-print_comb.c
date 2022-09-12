#include <stdio.h>
/**
 * main - entry into the program
 * Return: return 0 (success)
 */
int main(void)
{
int i = '0';
putchar(48);
for (i = '1'; i <= '9'; i++)
{
putchar(44);
putchar(32);
putchar(i);
}
return (0);
}
