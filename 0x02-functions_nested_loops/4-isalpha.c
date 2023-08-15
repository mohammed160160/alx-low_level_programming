#include "main.h"
#include <stdio.h>
/**
 * _isalpha - write if the written character is alphabet(upper or lower)
 * @c: the character the checker uses
 * Return: 1 if it's an alphabet value or 0 if it's not
 */
int _isalpha(int c)
	{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	}
