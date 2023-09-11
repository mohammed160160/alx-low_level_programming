#include <stdio.h>
#include "dog.h"

/**
 * print_dog - This structure prints the contant of the structure variable b;
 * @d: The pointer to the new variable
 * Return: Nothing since it's a void function
 */
void print_dog(struct dog *d)
{

if (d == NULL)
{ return; }

if (d->name == NULL)
{ printf("nil\n"); }
else
{ printf("Name: %s\n", d->name); }

printf("Age: %f\n", d->age);

if (d->owner == NULL)
{ printf("nil\n"); }
else
{ printf("Owner: %s\n", d->owner); }


}
