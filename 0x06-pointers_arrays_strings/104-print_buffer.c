#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the buffer of a string
 * @size: The size of the buffer
 * @b: The string
 * Return: The value in r which is the total of the operation
 */

void print_buffer(char *b, int size)
{
int x = 0, y = 0, z = 0;
for (x = 0; x < size; x = x + 10)
{
printf("%.8x: ", x); /*start of first part*/
for (y = 0; y < 10; y++)/*start of the second part*/
{
if (x + y >= size)
{
printf("  ");
}
if (x + y < size)
{
printf("%.2x", b[x + y]);
}
if ((x + y) % 2 == 1)
{
printf(" ");
}
}
for (z = 0; z < 10; z++)/*start of the third part*/
{
if (z + x >= size)
{ break; }
if (b[z + x] >= 31 && b[z + x] <= 126)
{
printf("%c", b[z + x]);
}
else
{
printf(".");
}
}
printf("\n");
}
if (size <= 0) /* if it was 0*/
{
printf("\n");
}
return;
}
