#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Condenses 2 string into a single string
 * @s1:The first string
 * @s2:The string after it
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
char *x;
int y, la = 0, lb = 0;

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

x = malloc((la + lb + 1) * sizeof(char));
if (x == NULL)
{
return (NULL);
}

for (y = 0; y < la + lb; y++)
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
