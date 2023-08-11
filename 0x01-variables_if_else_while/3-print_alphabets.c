#include <stdio.h>
#include <unistd.h>
/**
 * main - to print from a to z then A to Z
 * Description - this is a program to type from a to z and from A to Z
 * Return: 0
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
	putchar(x);
	x++;
	}
	while (y <= 'Z')
	{
	putchar(y);
	y++;
	}
	return (0);
}
