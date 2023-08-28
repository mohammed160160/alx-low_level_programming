#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Searches for the first occurance of an element c in
 * the string and prints out everything after it
 * @s: The pointer to the string
 * @c: The character being searched in the string
 * Return: A pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
int x = 0;
int l;
int sx;

while (s[l] != '\0')
{
l++
}

while (s[x] != '\0')
{
	if (s[x] == c)
	{
	break;
	}
x++;
}

sx = x;

if (x != l)
{
for (x; x <= y; x++)
{
s[x - sx] = s[x];
}
return (s);
}

else
{
return ('\0');
}

}
