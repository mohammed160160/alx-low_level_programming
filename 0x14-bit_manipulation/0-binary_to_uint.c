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
unsigned int x = 1;
unsigned int y = 0, z = 0, value = 0;


if (*b == '\0' || b == NULL)
{
return (0);
}

while (b[y] != '\0')
{
y++;
}

for (z = 1; y - z != 0; z++)
{
	if (b[y - z] != '0' && b[y - z] != '1')
	{
	return (0);
	}

	if (b[y - z] == '1')
	{
	value += x;
	}

	x *= 2;
}

return (value);
}
