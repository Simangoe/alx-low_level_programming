#include <stdio.h>
#include <string.h>
/**
 * _find_strlen - function that counts characters in a string
 * @counter: incrementer
 * @s: string to count from
 * Return: returns number of letters in a string
 */
int find_strlen(int count, char *s)
{
if (*s == '\0')
{
return (0);
}
if (*s > 0)
{
count++;
}
return (count + find_strlen(0, s + 1));
}
/**
 * _strlen_recursion - function that counts characters in a string
 * @s: string to count from
 * Return: returns number of letters in a string
 */
int _strlen_recursion(char *s)
{
return (find_strlen(0, s));
}
