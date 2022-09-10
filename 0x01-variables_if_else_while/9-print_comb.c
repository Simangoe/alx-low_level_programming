#include <stdlib.h>
#include <stdio.h>
/**
 * main - enter function to decide number sign
 * Return: return 0
 */
int main(void)
{
int i = 0;
int j = 0;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
printf("%d, %d", i, j);
}
printf(" ");
}
return (0);
}
