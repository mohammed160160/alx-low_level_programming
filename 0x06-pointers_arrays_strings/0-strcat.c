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
int ld;
int ls;
int x;

ls = 0;
ld = 0;

for (x = 0; src[x] != '\0'; x++)
{
ls++;
}

for (x = 0; dest[x] != '\0'; x++)
{
ld++;
}

for (x = ls; x < ls + ld; x++)
{
src[ls+x] = dest[x];
}

return(src);
}
