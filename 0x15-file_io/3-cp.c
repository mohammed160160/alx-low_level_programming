#include "main.h"

/**
 * main - creates a function that does the work of cp function
 * @argv: 0-nameoffile 1-name of fromfile 2-name of tofile
 * @argc: The number of arguments in the line
 * Return: 0 if successes,if it failed for any reason it exits and prints
 * the reason of exiting to standard error
 */

int main(int argc, char **argv)
{
int fileto = 0, filefrom = 0, reader = 0, writer = 0;
char *L;

if (argc != 3) /*Checks if there's 2 other arguments*/
{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97); }

L = malloc(1024 * sizeof(char)); /*Creates a buffer of 1024*/
if (L == NULL)
{ Errors(2, argv[2]); }

filefrom = open(argv[1], O_RDONLY); /*Opening the fromfile*/
if (filefrom == -1)
{ Errors(1, argv[1]); }
reader = read(filefrom, L, 1024); /*reading the first 1024 bytes from file*/
if (reader == -1)
{ Errors(1, argv[1]); }
fileto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664); /*Opening tofile*/
if (fileto == -1)
{ free(L);
Errors(2, argv[2]); }

while (reader > 0)/*A loop in case fromfile has more than 1024 bits*/
{
writer = write(fileto, L, reader);/*write the content in buffer to fileto*/
if (writer == -1)
{ free(L);
Errors(2, argv[2]); }
reader = read(filefrom, L, 1024); /*Reads the rest of the fromfile*/
if (reader == -1)
{ Errors(1, argv[1]); }
}

free(L);
filecloser(reader, filefrom);
filecloser(writer, fileto);
return (0);
}

/**
 * filecloser - closes a file
 * @file: The value of the filedescriptor
 * @checker: Checks for errors in closing
 * Return: 0 or an error 100.
 */
void filecloser(int checker, int file)
{
	checker = close(file);
	if (checker == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file);
	exit(100); }
}
/**
 * Errors - prints an 98/99 error
 * @file: The file name
 * @checker: Error number
 * Return: Nothing since it prints an error
 */
void Errors(int checker, char *file)
{
if (checker == 1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98); }
else
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99); }
}
