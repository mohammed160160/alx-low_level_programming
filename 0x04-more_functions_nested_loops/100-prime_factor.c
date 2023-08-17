#include <stdio.h>
/**
 * main - finds the biggest prime value for 612852475143
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	long int i = 2;

	while (i * i <= n)
	{
	if (n % i != 0)
	{
	i++;
	}
	else
	{
	n = n / i;
	}
	}
	printf("%li\n", n);
	return (0);
}
