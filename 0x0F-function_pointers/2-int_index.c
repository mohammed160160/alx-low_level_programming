#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer with specific style in an array
 * @array: An array of integers
 * @size: The size of the array
 * @cmp: The specifications of the integer searched
 * Return: The index of the first element that matches the cmp specifications
 * if no elements matches or size less than 0 return(-1)
 */


int int_index(int *array, int size, int (*cmp)(int))
{
int x = 0;
int y = 0;

if (size <= 0)
{
return (-1);
}

if (array == NULL)
{
return (-1);
}

if (cmp == NULL)
{
return (-1);
}


for (x = 0; x < size; x++)
{
y = cmp(array[x]);

	if (y != 0)
	{
	return (x);
	}
}


return (-1);
}
