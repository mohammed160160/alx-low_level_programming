#include "main.h"
/**
 * main - print the time from 00:00 to 23:59
 * Description - writes the time from start to finish
 * Return: Always 0.
 */
void jack_bauer(void)
	{
	int m;
	int h;

	for (h = 0; h < 24; h++)
	{
	for (m = 0; m < 60; m++)
	{
	_putchar(h / 10 + '0');
	_putchar(h % 10 + '0');
	_putchar(':');
	_putchar(m / 10 + '0');
	_putchar(m % 10 + '0');
	_putchar('\n');
	}
	}
	return;
	}
