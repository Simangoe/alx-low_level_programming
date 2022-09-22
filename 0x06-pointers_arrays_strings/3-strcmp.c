#include <stdio.h>
#include <string.h>
/**
 * _strcmp - function that compares two strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: Returns 0
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] > s2[i])
{
return (s1[i] - s2[i]);
break;
}
else if (s1[i] < s2[i])
{
return (s1[i] - s2[i]);
break;
}
else if (s1 == s2)
{
return (0);
}
}
return (0);
}
