
#include <stdio.h>
/**
 * main - enter function to decide number sign
 * Return: return 0
 */
int main(void)
{
char a = '0';
char j = 'a';

for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (j = 'a'; j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
