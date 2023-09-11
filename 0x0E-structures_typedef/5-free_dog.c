#include <stdio.h>
#include "dog.h"

/**
 * free_dog - This structure initializes a variable in the structure
 * @d: Writes the owner of the dog
 * Return: A pointer to the structure which contains the information of new dog
 */

void free_dog(dog_t *d)
{
free(d->name);
free(d->age);
free(d->owner);
free(d);
}
