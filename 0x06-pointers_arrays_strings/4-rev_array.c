#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reversing an array of numbers
 * @a: The array of number asked to be reversed
 * @n: The number of numbers
 * Return: Null
 */


void reverse_array(int *a, int n)
{

int x;
int y;
int s;

y = n / 2;
n = n - 1;

for (x = 0; x < y; x++)
{
s = a[x];
a[x] = a[n-x];
a[n-x] = s;
}

return;
}
