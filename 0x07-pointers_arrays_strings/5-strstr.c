#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Searches for the first occurance of a string of line
 * pointed to by needle in the string and prints out everything after it
 * @haystack: The pointer to the string
 * @needle: The sub string to be searched in the string
 * Return: A pointer to the memory area s
 */

char *_strstr(char *haystack, char *needle)
{
int x = 0, l = 0, ls = 0, cc = 0;

while (needle[l] != '\0')
{
l++;
}

while (haystack[lh] != '\0')
{
lh++;
}

if (l == 0)
{
	return (haystack + lh);
}

while (x < lh)
{

if (haystack[x] == needle[cc])
	{
	cc++;
	}
else
	{
	cc = 0;
	}

if (cc == l)
{
return (haystack + x - cc + 1);
}

x++;
}

return ('\0');
}
