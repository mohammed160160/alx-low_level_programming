#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - to write the numbers from 0 to 9 except for 2 and 4
 * Return: Always 0.
 */

void print_most_numbers(void)
{
int x = 48;

while (x <= 57)
{
if (x != 50 && x != 52)
{
_putchar(x);
}
x++;
}
_putchar('\n');
return;
}
