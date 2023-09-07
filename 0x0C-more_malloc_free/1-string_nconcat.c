#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Places number of bytes from s2 next to s1 then
 * the NULL Terminator
 * @s1: the first string
 * @s2: the second string
 * @n: The number of characters in s2 used
 * Return: The pointer to the combined string or NULL if no space is found
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *x;
unsigned int y, la = 0, lb = 0;

if (s1 == NULL)
{ s1 = ""; }
if (s2 == NULL)
{ s2 = ""; }

while (s1[la] != '\0')
{ la++; }
while (s2[lb] != '\0')
{ lb++; }

x = malloc((la + n + 1) * sizeof(char));

if (x == NULL)
{
return (NULL);
}

for (y = 0; y < la + n; y++)
{
	if (y < la)
	{ x[y] = s1[y]; }
	else
	{ x[y] = s2[y - la]; }
}

return (x);
}
