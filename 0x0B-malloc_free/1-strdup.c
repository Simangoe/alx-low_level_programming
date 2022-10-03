#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer to the duplicated string (success),
 * NULL if str = NULL, NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
  char *cpy = (char *)malloc(sizeof(str));
  if (cpy != NULL && cpy)
    {
      cpy = str;
      return (cpy);
    }
  return (NULL);
  free(cpy);
}
