#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - makes an array of integers for min to max values
 * @min: The min value
 * @max: The max value
 * Return: A pointer to the array or NULL if failed
 */

int *array_range(int min, int max)
{
int *V;
int d = 0;
int x = 0;

if (min > max)
{
return (NULL);
}

d = max - min;

V = malloc((d + 1) * sizeof(int));

if (V == NULL)
{
return (NULL);
}



for (x = 0; x <= d; x++)
{
V[x] = min + x;
}

return (V);

}
