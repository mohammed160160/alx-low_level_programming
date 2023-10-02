#include "main.h"

/**
 * main - prints the elf file of a process
 * @argv: 0-nameoffile 1-The process
 * @argc: The number of arguments in the line
 * Return: 0 if successes,error(98) with a reason if failed
 */

int main(int argc, char **argv)
{

if (argc != 2)
{
dprintf(2,"Error");
exit(98);
}

return(0);
}	
