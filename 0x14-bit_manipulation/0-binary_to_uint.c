#include "main.h"


/**
 * binary_to_uint - check the code
 * @b: 
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
long unsigned int x = 1;
unsigned int y = 0;
unsigned int z = 0;
unsigned int value = 0;

if (*b == '\0')
{ return (0); }


while (b[y] != '\0')
{ y++; }

for(z = 1; y >= z; z++)
{

	if(b[y - z] != '0' && b[y-z] != '1')
	{ return (0); }

	if(b[y-z] == '1')
	{value += x ;}

	x *= 2;
}

return (value);
}
