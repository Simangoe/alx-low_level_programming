#include <stdio.h>
#include <string.h>
/**
 * reverse_array - function to reverse an array
 * @a: array to reverse
 * @n: number of elements in array
 * Return: returns null
 */
void reverse_array(int *a, int n)
{
  int i;
  int b[n];

for (i = 0; i < n; i++)
{
b[i] = a[n - i - 1];
}
for (i = 0; i < n; i++)
{
a[i] = b[i];
}
return;
}
