#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiply only 2 argmuents
 * @argc: The argument counter
 * @argv: The argument vector(array)
 * Return: 1 if enter more or less than 2 argmuents 0 if Sucessful
 */

int main(int argc, char *argv[])
{
int x;

if (argc != 3)
{
printf("Error\n");
return (1);
}

x = atoi(argv[1]) * atoi(argv[2]);

printf("%i\n", x);
return (0);
}
