#include "main.h"

/**
 * create_file - creates a file and places content in it.
 * @filename: The name of the file in question
 * @text_content: The content of the file
 * Return:1 on success or -1 if any conditon failed
 */

int create_file(const char *filename, char *text_content)
{
FILE *files;
files = fopen(filename,"wr")




fclose(files);
return(1);
}
