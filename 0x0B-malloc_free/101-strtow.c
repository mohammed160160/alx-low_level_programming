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
int word = 0, los = 0, a =  0, b =  0, wlength = 0, xyz = 0;
if (str == NULL || str[0] == '\0')
{ return (NULL); }
los = string_length(str);
word = word_counter(str, los);
if (word == 0)
{ return (NULL); }
s = malloc((word + 1) * sizeof(char *));/*declaring the main array*/
if (s == NULL)
{ return (NULL); }
for (a = 0; a < los; a++)/*declaring the sub array*/
{
if ((str[a - 1] == 32 || str[a - 1] == '\0') && str[a] != 32)
	{
	wlength = length_of_word(str, a);
	s[b]  = malloc(wlength * sizeof(char));
		if (s[b] == NULL)
		{
			for (b = 0; b < word ; b++)
			{ free(s[b]); }
			free(s);
			return (NULL);
		}
		b++;
	}
}
b = 0;
for (a = 0; a < los; a++)/*declaring variables*/
{
	if ((str[a - 1] == 32 || str[a - 1] == '\0') && str[a] != 32)
	{
	wlength = length_of_word(str, a);
		for (xyz = 0; xyz <  wlength ; xyz++)
		{ s[b][xyz] = str[a +  xyz]; }
	b++;
	}
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
int x  =  0;
while (str[x] != '\0')
	{
	x++;
	}
return (x);
}

/**
 * word_counter - finds the number of words in a string
 * @str: The string which it needs to be searched
 * @q: Length of String
 * Return: The number of words in a string
 */
int word_counter(char *str, int q)
{
int x;
int y = 0;

for (x = 0; x < q; x++)
{
	if ((str[x - 1] == 32 || str[x - 1] == '\0') && str[x] != 32)
	{
	y++;
	}
}
return (y);
}

/**
 * length_of_word - finds the length of a single
 * @str: The string which it needs to be searched
 * @q: The element in the array where the word started
 * Return: The number of words in a string
 */
int length_of_word(char  *str, int q)
{
int x  =  q;
while (str[q] != 32 && str[q] != '\0')
	{
	q++;
	}
return (q - x);
}
