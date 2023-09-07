#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memory space equal to b
 * @b: the address of memory to print
 * Return: This should return with exit instead of return
 */

void *malloc_checked(unsigned int b)
{
void *x;

x = malloc(b);

if (x == NULL)
{ exit(0); }
else
{ exit(98); }


}
