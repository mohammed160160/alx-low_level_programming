#include <stdio.h>
#include <unistd.h>
/**
 * main - to print from a to z
 * Description - this is a program to type from a to z
 * Return: 0
 */
int main(void)
{
	char x = 'a';
	int y;

	while (x <= 'z')
	{
	putchar(x);
	x++;
	}
	y = write(1, ""ch"\n", 27);
	putchar(y);
	return (0);
}
