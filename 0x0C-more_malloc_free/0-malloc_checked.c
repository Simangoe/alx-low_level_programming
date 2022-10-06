#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: bytes to allocate
 * Return: pointer to new memory
 */
void *malloc_checked(unsigned int b)
{
void *a = malloc(b);

if (a != NULL)
{
return (a);
}
else
{
exit(98);
}
free(a);
}
