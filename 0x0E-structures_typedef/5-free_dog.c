#include <stdio.h>
#include "dog.h"

/**
 * free_dog - This program frees a structure
 * @d: Writes the owner of the dog
 * Return: A pointer to the structure which contains the information of new dog
 */

void free_dog(dog_t *d)
{

if (d == NULL)
{
return;
}

free(d->owner);
free(d->name);
free(d);
}
