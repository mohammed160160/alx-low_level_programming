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
void *s = malloc(b);

if (s == NULL)
{
exit(98);
}

return (s);
}
