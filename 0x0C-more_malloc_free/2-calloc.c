#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - This function should work like calloc which allocates memory
 * space like malloc but inizalizes all values to 0
 * @nmemb: the number of elements in the array
 * @size: the size of the elements in the array
 * Return: pointer to the build array or NULL if a condition failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *x;
unsigned int t;
unsigned int c;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

t = nmemb * size;

x = malloc(t);

if (nmemb == 0 || size == 0)
{
return (NULL);
}

for (c = 0; c < t; c++)
{
x[c] = 0;
}

return (x);
}
