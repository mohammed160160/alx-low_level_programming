#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - takes 2 integers and an argument operator(+ - * / %) 
 * and finds the value of the applied operator to the 2 integers
 * @argv: the argument vector
 * @argc: The argument counter
 * Return: nothing
 */

int main(int argc, char* argv[])
{
if (argc != 4)
{
	printf("Error");
	exit (98);
}

printf("%i\n", get_op_func(argc[2])(atoi(argc[1]), atoi(argc[3]))
return (0);
}
