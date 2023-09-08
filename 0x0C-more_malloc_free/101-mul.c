#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply 2 integers
 * @argc: The argument counter
 * @argv: The argument vector(array)
 * Return: 1 if enter more or less than 2 argmuents 0 if Sucessful
 */
int main(int argc, char *argv[])
{
int x = 0;
int z = 0;
char *c;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

for (x = 1; x < 3; x++)/*checks if all characters are digits*/
{
c = argv[x];
	for (z = 0; c[z] != '\0'; z++)
	{
		if (c[z] > 57 || c[z] < 48)
		{
		exit(98);
		}
	}

}

printf("%ld\n", atoi(argv[1]) * atoi(argv[2]));
return (T);
}
