#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **strtow - prints out each word in a string
 * @str:The string which it needs to be searched
 * Return: Null if str is empty or cannot allocate space 1 if else
 */

char **strtow(char *str)
{
char **s;
int word = 0;
int los = 0;


if (str == NULL)
{
return (NULL);
}

los = string_length(str);
word = word_counter(str, los);

printf("print the length of the string = %i  \n", los);
printf("print the words of the string = %i  \n", word);
printf("print the address of the string = %p  \n", *str);
printf("print the content of the string = %s  \n", str);
printf("print the address of the main = %p  \n", **s);


return (s);
}
/**
 * string_length - finds the length of the string
 * @str: The string which it needs to be searched
 * Return: The length of the string
 */
int string_length(char *str)
{
int x;

while (x != '\0')
{
x++;
}

return (x);
}
/**
 * word_counter - finds the number of words in a string
 * @str: The string which it needs to be searched
 * @los: Length of String
 * Return: The number of words in a string
 */
int word_counter(char *str, int los)
{
int x;
int count;

for (x = 0; x < los; x++)
{
	if (str[x] == 32 && str[x++] != 32 && str[x++] != '\0')
	{
	count++;
	}
}
return (count);
}
