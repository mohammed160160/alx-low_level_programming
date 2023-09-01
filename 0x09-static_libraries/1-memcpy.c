#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - Replaces n length of an array s with the char b
 * @dest: The pointer to the main array
 * @src: The number of elements string that get replaced with b
 * @n: The number of elements in src that get copied to dest
 * Return: A pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;

for (x = 0 ; x < n; x++)
{
dest[x] = src[x];
}

return (dest);
}
