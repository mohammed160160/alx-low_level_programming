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
while (x < size)
{
printf("%.7x: ", x);
/*-----------------------------------------*/
for (y = 0; y < 5; y++)
{
if ((y * 2) + x >= size)
{
printf("    ");
}
else
{
printf("%.2x%.2x", b[(y * 2) + x], b[(y * 2) + x + 1]);
}
if (y != 4)
{
printf(" ");
}
}
printf(" ");
/*-----------------------------------------------------*/
for (z = 0; z < 10; z++)
{
if (z + x >= size)
{
printf(" ");
}
else
{
printf("%c", b[z + x]);
}
}
/*------------------------------------------------------*/
printf("\n");
x = x + 10;
}
return;
}
