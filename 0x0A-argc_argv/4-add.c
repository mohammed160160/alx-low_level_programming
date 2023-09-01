#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds the value of the agruments together
 * @argc: The argument counter
 * @argv: The argument vector(array)
 * Return: 1 if there a non int value in the argument and 0 if successful
 */

int main(int argc, char *argv[])
{
int x = 0;
int y = 0;

if (argc == 1)
{
printf("0");
return (0);
}

if (argc != 3)
{
printf("Error\n");
return (1);
}


for (x = 0; x < argc; x++)
{
y += atoi(argv[x])
}

printf("%i\n", y);
}
