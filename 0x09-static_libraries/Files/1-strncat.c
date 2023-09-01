#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates 2 string but n segment of the source
 * @dest: The string that the is added on by the source
 * @src: The string that a segment used for string
 * @n: The segment of src that is used
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int l;
int x;

l = 0;

for (x = 0; dest[x] != '\0'; x++)
{
l++;
}

x = 0;

while (src[x] != '\0' && x < n)
{
dest[l + x] = src[x];
x++;
}

return (dest);
}
