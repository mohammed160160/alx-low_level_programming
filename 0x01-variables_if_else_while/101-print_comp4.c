#include <stdio.h>
/**
 * main -  writing unique 2 digits
 * Description - creating a program that write each unique 2
 * digit values
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
	j = i + 1;
	while (j < 10)
	{
	putchar(i + '0');
	putchar(j + '0');
	if (i != 8 || j != 9)
	{
	putchar(',');
	putchar(' ');
	}
	j++;
	}
	i++;
	}
	putchar('\n');
	return (0);
}
