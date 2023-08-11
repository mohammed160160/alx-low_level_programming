#include <stdio.h>
/**
 * main - to print the hexadecimal base from zero to f
 * Description - this is a program to type from zero to f in hexa system
 * Return: 0
 */
int main(void)
{
	char x = '0';
	char y = 'a';

	while (x <= '9')
	{
	putchar(x);
	x++;
	}
	while (y <= 'f')
	{
	putchar(y);
	y++;
	}
	putchar('\n');
	return (0);
}
