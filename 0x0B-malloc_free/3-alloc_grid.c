#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to a 2 dimensional array(success), Null on failure or 0
 */
int **alloc_grid(int width, int height)
{
int i;
int **arr;

if ((width && height) > 0)
arr = malloc((height * sizeof(int)));
if (arr != NULL)
{
for(i = 0; i < height; i++)
{
arr[i] = malloc(width * sizeof(int));
}
return (arr);
}
return (NULL);
}
