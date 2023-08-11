#include <stdio.h>
/**
 * main - to print from 0 to 9 and place comma and spaces
 * Description - this is a program to type from 0 to 9 and print' ,' next each
 * Return: 0
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
	putchar(x);
	if (x != 8)
	{
	putchar(',');
	putchar(' ');
	}
	x++;
	}
	putchar('\n');
	return (0);
}
