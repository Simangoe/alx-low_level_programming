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
unsigned int i = 0;
char *arr = (char *)malloc(size * sizeof(char) + 1);

for (i = 0; i <= size; i++)
{
arr[i] = c;
}
if (size > 0 && arr)
{
return (arr);
}
return (NULL);
}
