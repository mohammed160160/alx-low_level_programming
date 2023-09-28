#include "main.h"


/**
 * binary_to_uint - check the code
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
unsigned long int x = 1;
unsigned int y = 0;
unsigned int z = 0;
unsigned int value = 0;

if (*b == '\0') 
{ return (0); }


while (b[y] != '\0')
{ y++; }

for (z = 1; y >= z; z++)
{

	if (b[y - z] != '0' && b[y - z] != '1')
	{ return (0); }

	if (b[y - z] == '1')
	{ value += x; }

	x *= 2;
}

return (value);
}
