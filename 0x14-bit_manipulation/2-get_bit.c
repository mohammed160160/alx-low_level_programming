#include "main.h"


/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The number to be get the bit from
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{

unsigned long int X = 1;

if (index > (sizeof(n) * 8 - 1))
{
return (-1);
}

X = X << index;

if ((n & X) == 0)
{
return (0);
}

else
{
return (1);
}

}
