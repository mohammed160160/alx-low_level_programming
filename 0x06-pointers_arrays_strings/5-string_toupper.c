#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - turns any small letter in a string into a capital
 * @'': The pointer to the string
 * Return: The pointer
 */


char *string_toupper(char *)
{
int x;

x = 0;

while (''[x] != '\0')
{
	if (''[x] >= 'a' && ''[x] <= 'z')
	{
	''[x] -= 32;
	x++;
	}
}
return ('');
}





}
