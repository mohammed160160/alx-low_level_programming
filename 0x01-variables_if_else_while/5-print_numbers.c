#include <stdio.h>
/**
 * main - to print from 0 to 9
 * Description - this is a program to print out numbers from 0 to 9
 * Return: 0
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
	printf("%d", x);
	x++;
	}
	printf("\n");
	return (0);
}
