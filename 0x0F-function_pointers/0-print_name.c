#include <stdio.h>
/**
 * print_name - print name
 * @name: name to print
 * @f: function with name input
 * Return: nothing
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
