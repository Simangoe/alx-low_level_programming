#include <string.h>
#include <stdio.h>
/**
 * _memset: function that fills memory with a constant byte
 * @s: points to area to be filled
 * @b: character to fill memory
 * @n: size of buffer filled 
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
