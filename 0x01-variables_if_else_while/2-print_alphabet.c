#include <stdio.h>
/**
 * main - to print from a to z
 * Description - this is a program to type from a to z
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar(ch + "/n");
	return (0);
}
