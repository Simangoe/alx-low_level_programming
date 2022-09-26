#include <stdio.h>
#include <ctype.h>
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
  int i, j;
  size_t strlenofs = strlen(s);
  size_t strlenofaccept = strlen(accept);
  char *accumulate;

  for (i = 0; i <= strlenofs; i++)
    {
      for (j = 0; j <= strlenofaccept; j++)
	{
	  if (s[i] == accept[j])
	    {
	      accumulate = accumulate + s[i];
	    }
	}
      return (sizeof(accumulate));
    }
}
