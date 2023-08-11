#include <stdio.h>
/**
 * main -  writing unique 2 digits
 * Description - creating a program that write each unique 2
 * digit values
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int y;

	while (x < 10)
	{
	y = x + 1;
	while (y < 10)
	{
	putchar(x + '0');
	putchar(y + '0');
	if (x != 8 || y != 9)
	{
	putchar(',');
	putchar(' ');
	}
	y++;
	}
	x++;
	}
	putchar('\n');
	return (0);
}
