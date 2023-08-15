#include "main.h"
#include <stdio.h>
/**
 * _islower - write if the written character is lower alphabet letter
 * @c: the character the checker uses
 * Return: 1 if it's an lower alphabet character or 0 if it's not
 */
int _islower(int c)
	{
	if (c >= 97 && c <= 112)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	}
