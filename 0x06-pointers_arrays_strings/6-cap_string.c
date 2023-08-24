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
char si[14] = " \t\n,;.!?\"(){}";

x = 0;
while (str[x] != '\0')
{
if (str[x] >= 'a' && str[x] <= 'z')
{
	for (y = 0; y < 13; y++)
	{
		if (si[y] == str[x - 1] || x == 0 )
		{
		str[x] -= 32;
		}
	}
}
x++;
}
return (str);
}
