#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds the value of the agruments together
 * @argc: The argument counter
 * @argv: The argument vector(array)
 * Return: 1 if there a non digit value in the argument and 0 if successful
 */

int main(int argc, char *argv[])
{
int x = 0;
int y = 0;
int z = 0;
char *c;

if (argc == 1) /*checks if no arguments is put*/
{
printf("0\n");
return (0);
}

for (x = 1; x < argc; x++)/*checks if all characters are digits*/
{
c = argv[x];

	for (z = 0; c[z] != '\0'; z++)
	{
		if (c[z] > 57 || c[z] < 48)
		{
		printf("Error\n");
		return (1);
		}
	}

}

for (x = 0; x < argc; x++)/*Calculates the total*/
{
y += atoi(argv[x]);
}

printf("%i\n", y); /*prints the result*/
return (0);
}
