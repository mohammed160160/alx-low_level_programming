#include "main.h"
#include <stdio.h>

/**
 * _strlen - determain the length of a string
 * @s:The pointer to the string
 * Return: the string length of s
 */
int _strlen(char *s)
{
int y;
int x;

x = 0;
y = 0;
while (s[x] != 0)	
{
y++;
x++;
}
return(y);
}
