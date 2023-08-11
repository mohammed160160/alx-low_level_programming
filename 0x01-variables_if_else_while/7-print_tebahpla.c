#include <stdio.h>
/**
 * main - to print from z to a
 * Description - this is a program to type a string from z to a
 * Return: 0
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
	putchar(x);
	x--;
	}
	putchar('\n');
	return (0);
}
