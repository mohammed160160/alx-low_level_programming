#include "main.h"


/**
 * clear_bit - check the code
 * @n:
 * @index:
 * Return: Always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit = 1;
unsigned long int bat = 0;
unsigned int x = 0;
int byte = 0;

for (x = 0;x != index;x++)
{
bit = bit << 1;
}

bat = *n | bit;

byte = bat ^ bit;

return(byte);
}
