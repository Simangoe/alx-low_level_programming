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

i = 0;
while (i < n)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[n - i - 1]);
i++;
}
printf("\n");
return;
}
