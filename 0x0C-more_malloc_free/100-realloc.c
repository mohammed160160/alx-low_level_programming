#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - makes an array of integers for min to max values
 * @min: The min value
 * @max: The max value
 * Return: A pointer to the array or NULL if failed
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{




if (old_size == new_size)
{ 
return (ptr);
}

if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}








return(ptr);
}
