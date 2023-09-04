#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - allocates a space in the memory for a 2d array
 * @width: The width of the array
 * @height: The length of the array
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{

int **x;
int y;

if (width <= 0 || height <= 0)
{
return (NULL);
}

x = malloc((height * width) * sizeof(int));

if (x == NULL)
{
return (NULL);
}


for (y = 0; y < (height * width) ; y++)
{
	x[y] = 0;
}


return (x);
}
