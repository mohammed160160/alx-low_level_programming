#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: The string that is required to reverse
 * Return: Null
 */
void rev_string(char *s)
{
int x;
int y;

x = 0;
y = 0;

while (s[x] != 0)
{
y++;
x++;
}
y -= 1;
while (s[y] != 0)
{
_putchar(s[y]);
--y;
}
_putchar('\n');
return;
}
