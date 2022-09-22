#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: string to concatenate to
 * @src: string to concatenate
 * @n: number of bytes from src
 * Return: Returns a character string
 */
char *_strncat(char *dest, char *src, int n)
{
size_t dest_len = strlen(dest);
size_t i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
