#include <stdio.h>
void print_name_as_is(char *name);
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
print_name_as_is(name);
}
}
