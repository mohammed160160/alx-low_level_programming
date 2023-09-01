#include <stdio.h>
#include <stdlib.h>

/**
 * main - The minium amount of coins for cents
 * @argc: The argument counter
 * @argv: The argument vector(array)
 * Return: 1 if there is more than one argument and 0 if successful
 */

int main(int argc, char *argv[])
{
int x = 0;
int y = 0;
int z = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

y = atoi(argv[1]);

for (x = 0; y >= 25; x++)
{
	y -= 25;
	z++;
}
for (x = 0; y >= 10; x++)
{
	y -= 10;
	z++;
}
for (x = 0; y >= 5; x++)
{
	y -= 5;
	z++;
}
for (x = 0; y >= 2; x++)
{
	y -= 2;
	z++;
}
for (x = 0; y >= 1; x++)
{
	y -= 1;
	z++;
}
printf("%i\n", z);
return (0);
}
