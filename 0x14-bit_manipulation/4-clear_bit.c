#include "main.h"


/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n:A number.
 * @index:The index starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit = 1;

if (index > sizeof(unsigned long int) * 8)
{
return (-1);
}

bit = bit << index;

*n = *n & ~bit;

return (1);
}

