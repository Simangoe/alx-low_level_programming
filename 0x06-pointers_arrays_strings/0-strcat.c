#include <stdio.h>
#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: string to concatenate to
 * @src: string to concatenate
 * Return: Returns a character string
 */
char *_strcat(char *dest, char *src)
{
size_t dest_len = strlen(dest);
size_t i;

for (i = 0 ; src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return dest;
}
