#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints both diagonal sides
 * of a 2d array
 * @a: The pointer to the array in the shape of a square
 * @size: The size of the array
 * Return: Null
 */
void print_diagsums(int *a, int size)
{
int x;
int dia1 = 0;
int dia2 = 0;

if (size = 0)
{
printf("%i, %i\n", dia1, dia2);
}

for (x = 0; x < size; x++)
{
dia1 += a[(size * x) + x];
dia2 += a[(size * x) + (size - x) - 1];
}

printf("%i, %i\n", dia1, dia2);

}
