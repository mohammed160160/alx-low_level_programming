#include "search_algos.h"

/**
 * linear_search - searches for value in sorted array using linear algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: The value needed to be searched
 * Return: The first index of the value spotted or -1 if it doesnt in array
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
{ return (-1); }

for (i = 0; i < size; ++i)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
	{ return (i); }
}

return (-1);
}
