#include <stdio.h>
/**
 * main - writes a combination of each 2 valued numbers
 * Description - this program is used to print the value of each combination
 * of numbers from 00 to 99
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j;

	while (i <= 98)
	{
	j = i + 1;
	while (j <= 99)
	{
	putchar(i / 10 + '0');
	putchar(i % 10 + '0');
	putchar(' ');
	putchar(j / 10 + '0');
	putchar(j % 10 + '0');
	if (i != 98 || j != 99)
	{
	putchar(',');
	putchar(' ');
	}
	j++;
	}
	i++;
	}
	return (0);
	}
