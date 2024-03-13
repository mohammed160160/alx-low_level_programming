#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array using binary algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: The value needed to be searched
 * Return: The first index of the value spotted or -1 if it doesnt in array
*/

int binary_search(int *array, size_t size, int value)
{
int left = 0;
int right = size - 1;
int center;
int i;

while (left <= right)
{
center = (left + right) / 2;

printf("Searching in array: ");

for (i = left; i < right + 1; i++)
{
printf("%d", array[i]);

	if (i != right)
	{ printf(", "); }
}

printf("\n");

if (array[center] == value)
	{ return (center); }
else if (array[center] < value)
	{ left = center + 1; }
else
	{ right = center - 1 ; }

}

return (-1);
}
