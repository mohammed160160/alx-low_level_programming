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
int ct, pt, l, x, y;/*ct= Current total - pt previous total - l current length - xyz variables*/

if (ac == 0 || av == NULL)
{
return (NULL);
}
/********************************************************************/
for(x = 0; x < ac; x++)
{
l = 0;

while (av[x][l] != '\0')
{
l++;
}

ct += l;

*s = *(s + pt + 1);

s = malloc(l * sizeof(char));
if (s == NULL)
{
return (NULL);
}

for (y = 0; y < l; y++)
{
s[pt + l] = av[x][y];
}

s[pt + l] = '\n';
pt += l;
}
*s = *(s - pt);

return (s);
}
