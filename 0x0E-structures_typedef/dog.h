#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - This structure is a dog identification tag
 * @name: Writes the name of the dog
 * @age: Writes the age of the dog in float
 * @owner: Writes the owner of the dog
 */

typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
