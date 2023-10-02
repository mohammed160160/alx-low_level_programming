#include "main.h"

/**
 * main - appends text at the end of a file.
 * @filename: The name of the file in question
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success or -1 if any conditon failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
FILE *files;
files = fopen(filename,"wr");










fclose(files);
return(1);
}
