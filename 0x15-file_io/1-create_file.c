#include "main.h"

/**
 * create_file - creates a file and places content in it.
 * @filename: The name of the file in question
 * @text_content: The content of the file
 * Return:1 on success or -1 if any conditon failed
 */

int create_file(const char *filename, char *text_content)
{
int checker = 0;
int files = 0;

if (filename == NULL)
{ return (-1); }

files = open(filename, O_RDWR | O_CREAT, 0600);

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
