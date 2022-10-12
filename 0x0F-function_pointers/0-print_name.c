#include <stdio.h>
/**
 * print_name - print name
 * @name: name to print
 * @f: pointer to a function with name input
 * Return: null
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
else
{
NULL;
}
}
