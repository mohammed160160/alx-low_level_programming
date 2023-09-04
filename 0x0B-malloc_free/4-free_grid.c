#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - To free an 2d array from memory
 * @*grid:The grid wants to be free
 * @height:The height of the array
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
int y;

for (y = 0; y < height ; y++)
{
free(grid[y]);
}
free(grid);
}

