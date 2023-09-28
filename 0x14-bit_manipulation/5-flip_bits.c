#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n:A number.
 * @index:The index starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int X = 1;
unsigned long int l = 0;
unsigned int flip = 0;

X = X << (sizeof(n) * 8 - 1);

l = m ^ n;


while (X != 0)
{

if ((l & X) != 0)
{
flip++;
}

X = X >> 1;
}


return (flip);
}
