#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - function to capitalise first letter
 * @x: string to capitalise first letter
 * Return: return character string
 */
char *cap_string(char *x)
{     
int i;
int y = strlen(x);

for (i=1;i<y;i++){
if (x[i] == '\t')
{
x[i]= ' ';
}
if (isalpha(x[i]) && (x[i-1] == ' ' || x[i-1] == '\n' || x[i-1] == '\t' || x[i-1] == '.'))
{ 
x[i]= toupper(x[i]);
}
}
return (x);
}
