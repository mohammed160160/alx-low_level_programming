#include <stdio.h>

/**
 * main - Prints the number the argmuents in the line except the main argument
 * @argc: The argument counter
 * @argv: The argument vector(array)
 * Return: Success
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
printf("%i\n", (argc - 1));
return (0);
}
