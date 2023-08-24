#include "main.h"
#include <stdio.h>

/**
 * *leet - transform some letters to leet language
 * @str: The pointer that is used
 * Return: The pointer to the string
 */


char *leet(char *str)
{
int x;
int y;
char le[10] = "aAeEoOtTlL";
char et[5] = "43071";

x = 0;
while (str[x] != '\0')
{
	for (y = 0; y < 10; y++)
	{
	if (str[x] == le[y])
		{
		str[x] = et[y / 2];
		}
	}
x++;
}
return (str);
}
