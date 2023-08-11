#include <stdio.h>
/**
 * main - to print from a to z expect for e and q
 * Description - this is a program to type a string from a to z except the
 * letters e and q
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}
