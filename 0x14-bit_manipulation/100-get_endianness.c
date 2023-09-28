#include "main.h"

/**
 * get_endianness - checks the endianness.
 * @void: The function direction
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{


int bit = 1;

char *c = (char *)&bit;


if (*c == 0)
{
return (0);
}

else
{
return (1);
}


}
