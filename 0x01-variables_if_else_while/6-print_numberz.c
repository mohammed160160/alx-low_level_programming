#include <stdio.h>
/**
 * main - to print from 0 to 9
 * Description - this is a program to type from 0 to 9
 * Return: 0
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}
