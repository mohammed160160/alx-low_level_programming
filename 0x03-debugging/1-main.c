#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)/*there should be an increment function*/
	{
		putchar(i);/*this put char shouldnt be here*/
	}	

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
