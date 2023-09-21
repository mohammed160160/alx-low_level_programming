#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h:A pointer to the first element of the list
 * Return: The number of elements in the linked list
 */

size_t print_list(const list_t *h)
{
unsigned int current = 0;

for (current = 0; h != NULL ; current++)
{
	if (h->str == NULL)
	{
	printf("[0] (nil)\n");
	}

	else
	{
	printf("[%u] %s\n", h->len, h->str);
	}
h = h->next;
}

return (current);
}
