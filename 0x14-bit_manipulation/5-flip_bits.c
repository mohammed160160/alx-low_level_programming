#include "main.h"

/**
 * flip_bits - sets the value of a bit to 1 at a given index.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of different bits
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
