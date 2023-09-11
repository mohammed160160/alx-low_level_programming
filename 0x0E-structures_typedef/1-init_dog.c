#include <stdio.h>
#include "dog.h"

/**
 * init_dog - This structure initializes a variable in the structure
 * @d: The name of the initialized character
 * @name: Writes the name of the dog
 * @age: Writes the age of the dog in float
 * @owner: Writes the owner of the dog
 * Return: Nothing since it's a void function
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL) 
{
return;
}

(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
