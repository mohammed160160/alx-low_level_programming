#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: The name of the file in question
 * @letters: The number of letter that it should read and print
 * Return: The Number of bytes printed to stdout or () if any conditon failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *L;
int checker = 0;
int files = 0;

L = malloc(letters * sizeof(char));

if (filename == NULL)
{ return (0); }

files = open(filename, O_RDONLY);

if (files == -1)
{ return (0); }

checker = read(files, L, letters);
if (checker == -1)
{ return (0); }

checker = write(STDOUT_FILENO, L, checker);
if (checker == -1)
{ return (0); }

free(L);
close(files);
return (checker);
}
