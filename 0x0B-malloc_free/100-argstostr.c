#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - Lists all arguments that is entering an program
 * @av:argument vector
 * @ac:argument counter
 * Return: The pointer to the string or NULL if the operation failed
 */
char *argstostr(int ac, char **av)
{
char *s;
int tleng = 0, cleng = 0, l, x, y, z, w;

if (ac == 0 || av == NULL)
{
return (NULL);
}

for (x = 0; x < ac; x++) /*Total length of the compiler*/
{
	l = 0;
		while (av[x][l] != '\0')
		{
		l++;
		}
	tleng += l;
}
tleng += ac;
s = malloc((tleng + 1) * sizeof(char)); /*Declaring the memory*/
if (s == NULL)
{
return (NULL);
}
for (z = 0; z < ac; z++)/* giving value to the memory spaces*/
{
l = 0;
while (av[z][l] != '\0')
{
l++;
}
for (y = 0; y < l; y++)
{
w = cleng + y;
s[w] = av[z][y];
}
s[w + 1] = '\n';
cleng += l + 1;
}
return (s);
}
