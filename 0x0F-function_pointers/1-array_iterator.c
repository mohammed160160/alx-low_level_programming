#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Prints an array with size and formating as action
 * @array: An array of integers
 * @size: The size of the array
 * @action: The action applied on the array
 * Return: Nothing but it can fail if (size is less than or equal 0)
 * , (there isnt an array) or (there isnt an appliable action)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int x = 0;

if (size <= 0)
{
return;
}

if (array == NULL)
{
return;
}

if (action == NULL)
{
return;
}


for (x = 0; x < size ; x++)
{
action(array[x]);
}

}
