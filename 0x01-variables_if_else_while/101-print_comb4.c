#include <stdio.h>
/**
 * main -  writing unique 3 digits
 * Description - creating a program that write each unique 3
 * digit values
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	while (x < 8)
	{
	while (y < 9)
	{
	if (x != y)
	{
	while (z < 10)
	{
	if (x != z && y != z)
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
