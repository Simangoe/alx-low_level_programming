#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string to add to
 * @s2: string to concatenate
 * Return: pointer to allocated space containing s1, s2, and null terminated
 * if NULL is passed, empty string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int lenofs1;
int lenofs2;
int lenofs12;
int i, j = 0;

(s1 == NULL) ? (s1 = "", lenofs1 = 0) : (lenofs1 = strlen(s1));
(s2 == NULL) ? (s2 = "", lenofs2 = 0) : (lenofs2 = strlen(s2));
lenofs12 = lenofs1 + lenofs2 - 1;
concat = (char *)malloc((lenofs1 + lenofs2 + 1) * sizeof(char));
if (concat != NULL)
{
for (i = 0; i < lenofs1; i++)
{
concat[i] = s1[i];
}
for (i = (lenofs1); i <= lenofs12; i++, j++)
{
concat[i] = s2[j];
}
{
return (concat);
}
}
return (NULL);
free(concat);
}
