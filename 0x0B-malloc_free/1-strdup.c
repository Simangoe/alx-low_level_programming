#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer to the duplicated string (success),
 * NULL if str = NULL, NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
int lengthofstr;
char *cpy;
int i;

if (str != NULL)
{
lengthofstr = strlen(str) + 1;
cpy = (char *)malloc(lengthofstr *sizeof(char));
if (cpy != NULL)
{
for (i = 0; i < lengthofstr; i++)
{
cpy[i] = str[i];
}
return (cpy);
free(cpy);
}
return (NULL);
}
return (NULL);
}
