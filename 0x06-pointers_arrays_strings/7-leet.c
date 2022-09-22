#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * leet - function to encode
 * @x: string to capitalise first letter
 * Return: return character string
 */
char *leet(char *x)
{
char toBeReplaced[10] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
char toReplace[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
int i;
int j;
int strlenX = strlen(x);
int strlenToBeReplaced = strlen(toBeReplaced);

for (i = 1; i < strlenX; i++)
{
if (x[i] == 97 || x[i] == 65 || x[i] == 101 || x[i] == 69 || x[i] == 111 || x[i] ==79 || x[i] == 116 || x[i] == 84 || x[i] == 108 || x[i] == 76)
{
j = 1;
while (j < strlenToBeReplaced)
toBeReplaced[j] = toReplace[j];
j++;
}
}
return (x);
}
