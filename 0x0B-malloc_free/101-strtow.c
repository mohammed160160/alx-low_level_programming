#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **strtow - prints out each word in a string
 * @str:The string which it needs to be searched
 * Return: Null if str is empty or cannot allocate space 1 if else
 */

char **strtow(char *str __attribute__ ((unused)))
{
char **s;
int word = 0;
int los = 0;
int x;

if (str == NULL)
{
return (NULL);
}

los = string_length(str);
word = word_counter(str, los);


s = malloc (word * sizeof(char*));
if (s == NULL)
{
return (NULL);
}


for (x = 0;  x < word; x++)
{

s[x] = malloc(los* sizeof(char));

if (s[x] == NULL)
{
for (x = 0; x < los ; x++)
{
free(s[x]);
}
free(s);
return (NULL);
}

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
