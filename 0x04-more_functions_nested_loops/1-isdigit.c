#include "main.h"
#include <stdio.h>
/**
 * _isdigit - returns if the written character is digit from 0 to 9
 * @c: the character the checker uses
 * Return: 1 if it's a digit or 0 if it's not
 */
int _isdigit(int c)
	{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	}
