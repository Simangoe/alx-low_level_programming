#include <stdio.h>
/**
 * int_index - seeks a value from array
 * @array: array to search from
 * @size: size of array
 * @cmp: function to execute
 * Return: index of first occurance of value (suzzess)
 * -1 (fail)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, check;

if (size > 0 && cmp != NULL)
{
for (i = 0; i < size; i++)
{
check = cmp(array[i]);
if (i != size - 1)
{
if (check != 0)
{
return(i);
}
}
else
{
return (-1);
}
}
}
else
{
return (-1);
}
}
