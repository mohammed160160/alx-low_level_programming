#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *x;
unsigned int y, la = 0, lb = 0;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}

while (s1[la] != '\0')
	{
	la++;
	}
while (s2[lb] != '\0')
	{
	lb++;
	}


if (n >= lb)
{
n = lb;
}


x = malloc((la + n + 1) * sizeof(char));

if (x == NULL)
{
return (NULL);
}

for (y = 0; y < la + n; y++)
{
	if (y < la)
{
	x[y] = s1[y];
}
	else
	{
	x[y] = s2[y - la];
	}
}

return (x);
}
