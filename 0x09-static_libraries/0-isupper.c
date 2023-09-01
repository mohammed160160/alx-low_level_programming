#include "main.h"
#include <stdio.h>
/**
 * _isupper - write if the written character is upper alphabet letter
 * @c: the character the checker uses
 * Return: 1 if it's an upper alphabet character or 0 if it's not
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
