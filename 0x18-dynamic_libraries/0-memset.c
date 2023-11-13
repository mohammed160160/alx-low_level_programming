#include "main.h"
#include <stdio.h>

/**
 * *_memset - Replaces n length of an array s with the char b
 * @s: The pointer to the main array
 * @n: The number of elements string that get replaced with b
 * @b: The characters used instead of n size
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0 ; x < n; x++)
{
s[x] = b;
}

return (s);
}
