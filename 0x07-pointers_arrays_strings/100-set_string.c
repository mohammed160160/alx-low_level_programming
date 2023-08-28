#include "main.h"
#include <stdio.h>

/**
 * set_string - Setting the characters of one string into another string
 * @s:The string that is used for copying
 * @to:The string that is getting copied over
 * Return: Null
 */

void set_string(char **s, char *to)
{
int x;

for (x=0; *s[x] != '\0'; x++)
{
to[x] = *s[x];
}

return;
}
