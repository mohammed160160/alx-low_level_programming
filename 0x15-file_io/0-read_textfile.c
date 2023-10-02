#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: The name of the file in question
 * @letters: The number of letter that it should read and print
 * Return: The Number of bytes printed to stdout or () if any conditon failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char L[letters];
unsigned long int checker = 0;
unsigned long int R = 0;

if (filename == NULL)
{ return (0); }

int files = open(filename,O_RDONLY)

if (files == -1)
{ return (0); }

checker = read(files,L,letters);
if (checker == -1)
{ return (0); }

R = checker;

checker = write(STDOUT_FILENO,L,checker);
if (checker == -1)
{ return (0); }

close(files);
return (checker);
}
