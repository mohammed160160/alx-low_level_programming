#include "main.h"
#include <stdio.h>

/**
 * *infinite_add - Adds the numbers in 2 arrays
 * @n1: The first number array
 * @n2: The second number array
 * @r: The array that host the total
 * @size_r: The size of the total array
 * Return: The value in r which is the total of the operation
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int x = 0, l1 = 0, l2 = 0, c = 0, bigl;

for (x = 0; n1[x] != '\0'; x++)
{
l1++;
}
for (x = 0; n2[x] != '\0'; x++)
{
l2++;
}

if (l1 >= l2)
{
bigl = l1;
}
else
{
bigl = l2;
}

if (size_r <= bigl + 1)
{
return (0);
}
x = bigl;
while (x != 0)
{
r[x] = n1 [x - 1] + n2[x - 1] + c;
if (r[x] >= 10 && x != 1)
{
r[x] -= 10;
c = 1;
}
if (r[x] < 10 && x != 1)
{
c = 0;
}
x--;
}
return (r);
}
