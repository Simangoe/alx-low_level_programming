#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to locate from
 * @accept: characters to locate
 * Return: returns a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int strlenofs = strlen(s);

for (i = 0; i <= strlenofs; i++)
{
if (s[i] == accept[i])
{
break;
}
}
return (&s[i - 1]);
}
