#include <stdio.h>
/**
 * array_iterator - iterates through array changing function parameters
 * @array: array with parameters
 * @size: size of array
 * @action: function to run
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (action != NULL && array != NULL)
for (i = 0; i < size; i++)
{
action(array[i]);
}
else
{
NULL;
}
}
