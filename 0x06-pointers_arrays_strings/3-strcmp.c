#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares 2 strings with each other
 * @s1: The first string
 * @s2: The Second string
 * Return: The difference of the first variable that's different
 */

int _strcmp(char *s1, char *s2)
{
int x;
int y;
int d;
int ls1;
int ls2;


for (x = 0; s1[x] != '\0'; x++)
{
ls1++;
}

for (x = 0; s2[x] != '\0'; x++)
{
ls2++;
}

x = 0;
while (s1[x] == s2[x])
{
x++;
}

d = s1[x] - s2[x];

return(d);
}
