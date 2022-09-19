#include <stdio.h>
#include <string.h>
/**
 * _strlen - function that counts characters
 * @s: parameter for the function
 * Return: returns integer
 */
int _strlen(char *s)
{
unsigned int count = 0;
while (*s!='\0')
{
count++;
s++;
}
return (count);
}
