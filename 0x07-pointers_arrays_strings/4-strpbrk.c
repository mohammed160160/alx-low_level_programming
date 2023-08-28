#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Searches for the first occurance of any byte in the character
 * pointed to by accept in the string and prints out everything after it
 * @s: The pointer to the string
 * @accept: The set of bytes wanted to be searched
 * Return: A pointer to the memory area s
 */

char *_strpbrk(char *s, char *accept)
{
int x = 0;
int y = 0;

while (s[x] != '\0')
{
	for (y=0; accept[y] != '\0';  y++)
	{
		if (s[x] == accept[y])
        	{
        	return (s + x);
        	}
	}	
x++;
}

return ('\0');
}
