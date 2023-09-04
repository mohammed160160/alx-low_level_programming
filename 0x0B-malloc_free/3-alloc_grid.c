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
int z, y;
int a, b;

if (width < 1 || height < 1)
{
return (NULL);
}

x = malloc(height * sizeof(int *));
for (y = 0; y < height ; y++)
{
x[y] = malloc(width * sizeof(int));
}

if (x == NULL)
{
for (z = 0; z < height ; z++)
{
free(x[z]);
}
return (NULL);
}

for (a = 0; a < height; a++)
{
	for (b = 0; b < width; b++)
	{
		x[a][b] = 0;
	}
}

for (a = 0; a < height; a++)
{
        for (b = 0; b < width; b++)
        {
                if(x[a][b] != 0)
		{
			free(*x);
			return (NULL);
		}
        }
}


return (x);
}
