#include <stdio.h>
/**
 * helper_fun - called when function in main is empty                         
 * @name: name to print
 */
void helper_fun(char *name)
{
  printf("Hello, my name is %s\n", name);
}
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
      helper_fun(name);
    }
}
