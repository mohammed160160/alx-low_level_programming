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
char *s;
unsigned int x;

if (old_size == new_size)
{
return (ptr);
}

if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
s = malloc(new_size);
return (s);
}

s = malloc(new_size);
if (old_size < new_size)
{
	for (x = 0; x < old_size; x++)
	{
	s[x] = ((char *)ptr)[x];
	}
}
else
{
	for (x = 0; x < new_size; x++)
	{
	s[x] = ((char *)ptr)[x];
	}
}

free(ptr);
return (s);
}
