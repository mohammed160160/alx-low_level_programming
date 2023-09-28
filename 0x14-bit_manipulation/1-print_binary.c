#include "main.h"

/**
 * print_binary - check the code
 * @n: 
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
unsigned long int X = 1;
int y = 0;

X = X << (sizeof(n)*8 - 1);

if (n == 0)
{
_putchar('0');
return;
}


while (X != 0)
{

if ((n & X) == 0 && y == 1)
{	
_putchar('0');
}
	
	else if ((n & X) == 1)	
	{
	_putchar('1');
	y = 1;
	}

X = X >> 1;
}	

}
