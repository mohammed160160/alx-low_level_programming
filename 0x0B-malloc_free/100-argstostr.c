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
char *x;
int z, y, lt = 0, lc=0, l = 0;

if (ac == 0 || av == NULL)
{
return (NULL);
}

for(z = 0; z < ac; z++)
{
l = 0;
while (av[z][l] != '\0')
{
l++;
}
lt += l;
}

x = malloc((lt + 1) * sizeof(char));
if (x == NULL)
{
return (NULL);
}

for(z = 0; z < ac; z++)
{
l = 0;
	while (av[z][l] != '\0')
	{
	l++;
	}
		for (y = 0; y < l; y++)
			{
			x[lc+l] = av[z][y];
			}
x[lc+l] = '\n';
lc += l;
}
return (x);
}

