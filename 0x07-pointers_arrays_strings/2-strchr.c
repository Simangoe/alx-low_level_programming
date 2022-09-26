#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr - function that locates a character in a string
 * @s: string to search
 * @c: character to locate
 */
char *_strchr(char *s, char c)
{
int i;
size_t lenofs = strlen(s);

for (i = 0; i <= lenofs; i++)
{
if (s[i] == c)
{
return (&s[i]);
break;
}
}
}
