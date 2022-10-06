#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates
 * @s1: destination string
 * @s2: src
 * @n: number of bytes to copy
 * Return: pointer to address on success, null on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strcn;
size_t a, c, i, j;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (n < strlen(s2))
{
a = sizeof(char) * strlen(s1) + n + 1;
c = strlen(s1) + n + 1;
}
else
{
a = sizeof(char) * (strlen(s1) + strlen(s2) + 1);
c = strlen(s1) + strlen(s2) + 1;
}
strcn = malloc(a);
if (strcn != NULL)
{
for (i = 0; i <= strlen(s1); i++)
{
strcn[i] = s1[i]; 
}
for (i = strlen(s1); i < c; i++, j++)
{
if (i < c - 1)
{
strcn[i] = s2[j];
}
else
{
strcn[i] = '\0';
}
}
return (strcn);
free(strcn);
}
return (NULL);
free(strcn);
}
