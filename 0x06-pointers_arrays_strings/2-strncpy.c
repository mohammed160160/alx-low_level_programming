#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies a portion of a string into another string
 * @dest: The string the src string portion is applying
 * @src: The string that's taking a portion from
 * @n: the number of the variable of the src is taken as portion
 * Return: Null
 */


char *_strncpy(char *dest, char *src, int n)
{

int x;

x = 0;
while (x < n)
{
dest[x] = src[x];
x++;
}

return (dest);
}
