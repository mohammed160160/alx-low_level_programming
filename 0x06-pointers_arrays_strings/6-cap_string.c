#include "main.h"
#include <stdio.h>

/**
 * *cap_string - Turns the start of all words in a sentence into capital
 * @str: The pointer that is used
 * Return: The pointer used
 */

char *cap_string(char *str)
{
int x;
int y;
char si[14] = " \t\n\v,;.!?\"(){}";

x = 0;
while (str[x] != '\0')
{
	for (y = 0; y < 14; y++)
	{
	if (str[x] == si[y] && (str[x + 1] >= 'a' && str[x + 1] <= 'z'))
		{
		str[x + 1] -= 32;
		}
	}
x++;
}
return (str);
}
