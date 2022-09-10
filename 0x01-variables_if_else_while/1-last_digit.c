#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - enter function to decide number sign
 * Return: return 0
 */
int main(void)
{
int n;
int ldn;

ldn = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d",n ,ldn);

if (ldn > 5)
{
printf("and is greater than 5\n");
}
else if (ldn == 0)
{
printf("and is 0\n");
}
else if (ldn < 6 && ldn != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
