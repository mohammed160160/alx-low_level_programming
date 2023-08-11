#include <stdio.h>
/**
 * main -  writing unique 3 digits
 * Description - creating a program that write each unique 3
 * digit values
 * Return: 0
 */
int main(void)
{
	int w = 0;
	int x;
	int y;
	int z;

	while (w < 1000)
	{
	x = w / 100;
	y = (w / 10) % 10;
	z = w % 100;
	if (x < y && y < z)
	{
	putchar(z + '0');
	putchar(y + '0');
	putchar(x + '0');
	if (x < 789)
	{
	putchar(',');
	putchar(' ');
	}
	}
	w++;
	}
	putchar('\n');
	return (0);
}
