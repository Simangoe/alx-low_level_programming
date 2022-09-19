#include "2-strlen.c"
#include <stdio.h>
/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: returns integer value
 */
int _atoi(char *s)
{
  int res = 0;
 
  // Iterate through all characters
  // of input string and update result
  // take ASCII character of corresponding digit and
  // subtract the code from '0' to get numerical
  // value and multiply res by 10 to shuffle
for (int i = 0; str[i] != '\0'; ++i)
res = res * 10 + str[i] - '0';
return res;
}
