#include <stdio.h>
/**
 * main -  writing unique 3 digits
 * Description - creating a program that write each unique 3
 * digit values
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	x = 0;
	while (x < 8)
	{
	y = 0;
	while (y < 9)
	{
	if (y != x)
	{
	z = 0;
	while (z < 10)
	{
	if (z != x && z != y)
	{
	putchar(x + '0');
	putchar(y + '0');
	putchar(z + '0');
	if (x != 7 || y != 8 || z != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	z++;
	}
	}
	y++;
	}
	x++;
	}
	putchar('\n');
	return (0);
}
