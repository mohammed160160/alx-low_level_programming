#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array of chars and initialize it with a char
 * @c: The initilaizing value
 * @size: the size of the memory to print
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
char *x;
unsigned int y;

x = malloc(size * sizeof(char));

if (*x == NULL)
{
return (NULL);
}

for (y = 0; y < size; y++)
{
x[y] = c;
}

return (x);
}
