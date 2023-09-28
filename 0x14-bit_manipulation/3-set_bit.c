#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n:A number.
 * @index:The index starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit = 1;
unsigned int x = 0;
int byte = 0;

for (x = 0; x != index; x++)
{
bit = bit << 1;
}

byte = *n | bit;

return (byte);
}
