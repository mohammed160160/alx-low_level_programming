#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - makes an array of integers for min to max values
 * @old_size: The min value
 * @new_size: The max value
 * @ptr: Pointer the array holding the old_size info
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
