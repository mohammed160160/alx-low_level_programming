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
int tleng = 0, cleng = 0, l, x, y;

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

tleng += ac + 1;

s = malloc(tleng * sizeof(char)); /*Declaring the memory*/
printf("value of tleng = %i", tleng)
if (s == NULL)
{
return (NULL);
}

for (x = 0; x < ac; x++)/* giving value to the memory spaces*/
{
l = 0;
while (av[x][l] != '\0')
{
l++;
}
for (y = 0; y < l; y++)
{
s[cleng + l] = av[x][y];
}
s[cleng + l] = '\n';
cleng += l + 1;
}
return (s);
}
