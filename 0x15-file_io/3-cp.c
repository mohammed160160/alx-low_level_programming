#include "main.h"

/**
 * cp - creates a function that does the work of cp function
 * @argv: 0-nameoffile 1-name of fromfile 2-name of tofile
 * @argc: The number of arguments in the line
 * Return: 0 if successes,if it failed for any reason it exits and prints
 * the reason of exiting to standard error
 */

int cp(int argc, char **argv)
{
int checker = 0, fileto = 0, filefrom = 0;
char *L;

L = malloc(1024 * sizeof(char));

if (argc != 3)
{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
exit(98); }

filefrom = open(argv[1], O_RDWR);
if (filefrom == -1)
{ dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
exit(98); }

fileto = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0661);
if (fileto == -1)
{ dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
exit(99); }

checker = read(filefrom, L, 1024);
if (checker == -1)
{ dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
exit(98); }

checker = write(fileto, L, checker);
if (checker == -1)
{ dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
free(L);
exit(99); }

free(L);
checker = close(filefrom);
if (checker == -1)
{ dprintf(STDERR_FILENO, "Error: Can't read from %i", filefrom);
exit(98); }

checker = close(fileto);
if (checker == -1)
{ dprintf(STDERR_FILENO, "Error: Can't close fd %i", fileto);
exit(98); }

return (0);
}
