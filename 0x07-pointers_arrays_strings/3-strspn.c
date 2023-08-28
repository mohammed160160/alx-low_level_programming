#include "main.h"
#include <stdio.h>

/**
 * _strspn - counts from the start of the string (s) every occurance of
 * the bytes in the accept string until a value not in accept occur
 * @s: The pointer to the string
 * @accept: The characters the string count
 * Return: The value of (s) that contain value in accept before a non
 * accept value appear
 */

unsigned int _strspn(char *s, char *accept)
{
int x = 0, y = 0, cc = 0, fc = 0;

while (s[x] != '\0')
{
	for (y = 0; accept[y] != '\0';  y++)
	{
		if (s[x] == accept[y])
		{
		cc += 1;
		}
	}

	fc += 1;
	if (fc > cc)
	{
	return (cc);
	}
x++;
}


return (cc);
}
