#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Searches for the first occurance of a string of line 
 * pointed to by needle in the string and prints out everything after it
 * @haystack: The pointer to the string
 * @needle: The sub string to be searched in the string
 * Return: A pointer to the memory area s
 */

char *_strstr(char *haystack, char *needle);
{
int x = 0;
int y = 0;

while (haystack[x] != '\0')
{
	for (y = 0; accept[y] != '\0';  y++)
	{
		if (haystack[x] != needle[y])
		{
		break;
		}
		return (s + x);
	}
x++;
}
return ('\0');
}
