#include "main.h"

/**
 * cp - creates a function that does the work of cp function
 * @argv: 0-nameoffile 1-name of fromfile 2-name of tofile
 * @argc: The number of arguments in the line
 * Return: 0 if successes,if it failed for any reason it exits and prints
 * the reason of exiting to standard error
 */

int main(int argc, char **argv)
{
ssize_t checker = 0; 
int fileto = 0, filefrom = 0;
char *L;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
/********************************************************/
L = malloc(1024 * sizeof(char));
if (L == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
/********************************************************/
filefrom = open(argv[1], O_RDONLY);
if (filefrom == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

checker = read(filefrom, L, 1024);
if (checker == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
/**********************************************************/
fileto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fileto == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(L);
exit(99);
}

checker = write(fileto, L, checker);
if (checker == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(L);
exit(99);
}
/**********************************************************/
free(L);
filecloser(checker, filefrom);
filecloser(checker, fileto);
return (0);
}

/**
 * closer - closes a file
 * @file: The value of the filedescriptor
 * Return: 0 or an error 100.
 */
void filecloser(ssize_t checker, int file)
{
checker = close(file);
	if (checker == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file);
	exit(100);
	}
}
