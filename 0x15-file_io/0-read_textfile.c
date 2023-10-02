#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: The name of the file in question
 * @letters: The number of letter that it should read and print
 * Return: The Number of bytes printed to stdout or () if any conditon failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *files;
unsigned long int printed;

files = fopen(filename,"wr")



fclose(files);
return(printed);
}
