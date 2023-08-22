#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates a password for crackme file
 * Return: 0
 */

int main(void)
{
int pw[64];
int i;
int s = 0;
int n;

srand(time(NULL));

	for (i = 0; i < 64; i++)
	{
	pw[i] = rand() % 78;
	s += pw[i] + '0';
	putchar(pw[i] + '0');
		if ((2772 - s) - '0' < 78)
		{
		n = 2772 - s - '0';
		s += n;
		putchar(n + '0');
		break;
		}
	}	
return (0);
}
