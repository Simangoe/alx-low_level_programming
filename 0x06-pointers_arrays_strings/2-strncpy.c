#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: string to copy to
 * @src: string to copy
 * @n: number of bytes to be copied
 * Return: Returns a character string
 */
char *_strncpy(char *dest, char *src, int n)
{
size_t i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
