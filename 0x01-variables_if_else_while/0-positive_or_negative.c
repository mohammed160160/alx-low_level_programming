#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -for printing if n is positive, negative or zero
 * Description -this is an if function that that defines if n is
 * positive,negative or zero
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("0 is zero\n");
	}
	return (0);
}
