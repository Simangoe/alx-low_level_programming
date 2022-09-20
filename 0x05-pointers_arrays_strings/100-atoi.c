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
int i;
int res = 0;
for (i = 0; s[i] != '\0'; ++i)
res = res * 10 + s[i] - '0';
return (res);
}
