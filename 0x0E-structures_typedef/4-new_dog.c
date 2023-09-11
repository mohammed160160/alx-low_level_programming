#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - Creates a memory space which uses malloc
 * @name: Writes the name of the dog
 * @age: Writes the age of the dog in float
 * @owner: Writes the owner of the dog
 * Return: A pointer to the structure which contains the information of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *Dog;

Dog = malloc(sizeof(dog_t));

if (Dog == NULL)
{
return (NULL);
}

Dog->name = name;
Dog->age = age;
Dog->owner = owner;

return (Dog);
}
