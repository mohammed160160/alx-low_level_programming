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
int checker = 0, fileto = 0, filefrom = 0;
char *L;
L = malloc(1024 * sizeof(char));
if (argc != 3)
{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
exit(97); }
filefrom = open(argv[1], O_RDONLY);
if (filefrom == -1)
{ dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
exit(98); }
checker = read(filefrom, L, 1024);
if (checker == -1)
{ dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
exit(98); }
fileto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fileto == -1)
{ dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
free(L);
exit(99); }
checker = write(fileto, L, checker);
if (checker == -1)
{ dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
free(L);
exit(99); }
free(L);
checker = close(filefrom);
if (checker == -1)
{ dprintf(STDERR_FILENO, "Error: Can't read from %i", filefrom);
exit(100); }
checker = close(fileto);
if (checker == -1)
{ dprintf(STDERR_FILENO, "Error: Can't close fd %i", fileto);
exit(100); }
return (0);
}
