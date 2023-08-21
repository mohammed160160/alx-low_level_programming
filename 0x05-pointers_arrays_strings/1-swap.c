#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of 2 integers
 * @a:pointer that defines int a value
 * @b:pointer that holds int b value
 * Return: Null
 */

void swap_int(int *a, int *b)
{
int a = &a;
int b = &b;
*a = b;
*b = a;
return;
}
