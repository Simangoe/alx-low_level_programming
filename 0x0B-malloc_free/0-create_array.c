#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * @size: size of the array
 * @c: an initializer to the array
 * Return:  NULL if size = 0, a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
int i = 0;
char *arr;

if ((char *)malloc(size * sizeof(char)) != NULL)
{
arr = (char *)malloc(size * sizeof(char));
}
else
{
return (NULL);
}
for (i = 0; i < (size); i++)
{
arr[i] = c;
}
if (size > 0)
{
return (arr);
}
else
{
return (NULL);
}
free(arr);
}
