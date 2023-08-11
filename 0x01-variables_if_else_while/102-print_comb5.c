#include <stdio.h>
/**
 * main - writes a combination of each 2 valued numbers
 * Description - this program is used to print the value of each combination
 * of numbers from 00 to 99
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int y;

	while (x <= 98)
	{
	y = x + 1;
	while (y <= 99)
	{
	putchar(x / 10 + '0');
	putchar(x % 10 + '0');
	putchar(' ');
	putchar(y / 10 + '0');
	putchar(y % 10 + '0');
	if (x != 98 || y != 99)
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
