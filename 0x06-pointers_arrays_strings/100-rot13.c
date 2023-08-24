#include "main.h"
#include <stdio.h>

/**
 * *rot13 - using rot13 encryption on a file
 * @str: The pointer that is used
 * Return: The pointer to the string
 */


char *rot13(char *str)
{
int x;
int y;
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char bet[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

x = 0;
while (str[x] != '\0')
{
	for (y = 0; y < 52; y++)
	{
		if (str[x] == alp[y])
		{
			str[x] = bet[y];
		}
	}
x++;
}
return (str);
}
