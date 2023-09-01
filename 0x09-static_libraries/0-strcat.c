#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @src: The second string in the combined string
 * @dest: The first string in the combined string and the carrier of
 * the combined string
 * Return: Null
 */

char *_strcat(char *dest, char *src)
{
int l;
int x;

l = 0;


for (x = 0; dest[x] != '\0'; x++)
{
l++;
}

x = 0;

while (src[x] != '\0')
{
dest[l + x] = src[x];
x++;
}

return (dest);
}
