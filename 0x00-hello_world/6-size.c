#include <stdio.h>
/**
 *main-start of function
 *return: 0
 */
int main (void)
{
char a;
int b;
long int c;
long long int d;
float e;
  
printf("Size of a char: %c byte(s)\n", sizeof(a));
printf("Size of an int: %i byte(s)\n", sizeof(b));
printf("Size of a long int: %ld byte(s)\n", sizeof(c));
printf("Size of a long long int: %lld byte(s)\n", sizeof(d));
printf("Size of a char: %f byte(s)\n", sizeof(e));
return 0;
}