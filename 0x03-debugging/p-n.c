#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - determains if the number i is positive,
 * negative or zero
 * @i: the number which the function determains
 * Return: 0
*/

void positive_or_negative(int i)
{

if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("0 is zero\n");
}

return;
}
