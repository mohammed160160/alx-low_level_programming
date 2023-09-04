#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - prints buffer in hexa
 * @str:3
 * Return: Nothing.
 */

char *_strdup(char *str)
{
char *x;
int y;  /*The counter*/
int l = 0;  /*length of str*/

if (str == NULL)
{
return (NULL);
}


while (str[l] != '\0')
{
l++;
}

x = malloc((l + 1) * sizeof(char));

if (x == NULL)
{
return (NULL);
}

for (y = 0; y < l; y++)
{
x[y] = str[y];
}

return (x);
}
