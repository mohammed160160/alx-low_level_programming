#include "main.h"

/**
 * main - appends text at the end of a file.
 * @filename: The name of the file in question
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success or -1 if any conditon failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
int checker = 0;
int files = 0;

if (filename == NULL)
{ return (-1); }

files = open(filename, O_WRONLY | O_APPEND);
if (files == -1)
{ return (-1); }

if (text_content != NULL)
{
checker = write(files, text_content, strlen(text_content));
if (checker == -1)
{ return (-1); }
}

close(files);
return (1);
}
