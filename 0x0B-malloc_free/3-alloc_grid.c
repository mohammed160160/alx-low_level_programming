#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - allocates a space in the memory for a 2d array
 * @width: The width of the array
 * @height: The length of the array
 * Return: The double pointer to the array or NULL if height or width less
 * than or equal zero or x cant fit in the memory
 */

int **alloc_grid(int width, int height)
{

int **x;
int y;
int a, b;

if (width < 1 || height < 1)
{
return (NULL);
}

x = malloc(height * sizeof(int *));

if (x == NULL)
{
return (NULL);
}

for (y = 0; y < height ; y++)
{
x[y] = malloc(width * sizeof(int));

if (x[y] == NULL)
{
for (y = 0; y < height ; y++)
{
free(x[y]);
}
free(x);
return (NULL);
}
}

for (a = 0; a < height; a++)
{
	for (b = 0; b < width; b++)
	{
		x[a][b] = 0;
	}
}
return (x);
}
