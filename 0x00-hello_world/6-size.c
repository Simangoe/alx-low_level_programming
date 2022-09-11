#include <stdio.h>
/**
 *main-start of function
 *Return: 0
 */
int main (void)
{
char a = 'a';
int b = 10;
long int c = 10;
long long int d = 10;
float e = 10.10;

printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of an int: %i byte(s)\n", sizeof(b));
printf("Size of a long int: %ld byte(s)\n", sizeof(c));
printf("Size of a long long int: %lld byte(s)\n", sizeof(d));
printf("Size of a float: %d byte(s)\n", sizeof(e));
return 0;
}
