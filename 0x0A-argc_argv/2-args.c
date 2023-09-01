#include <stdio.h>

/**
 * main - Prints every argument in the command line each in a different line
 * @argc: The argument counter
 * @argv: The argument vector(array)
 * Return: Success
 */

int main(int argc, char *argv[])
{
int x;

for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
