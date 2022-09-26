#include <stdio.h>
#include <string.h>
/**
 * _memcpy - unction that copies memory area
 * @dest: memory are to copy to
 * @src: memory are to copy from
 * @n: number of bytes to copy
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}
return (dest);
}
