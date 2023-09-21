#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
unsigned int current = 0;

for (current = 0; h != NULL ; current++)
{
		if (h->str == NULL)
		{
		printf("[0], (nil)\n");
		}
			else
			{
			printf("[%u], %s\n",h->len ,h->str);
			}
h = h->next;
}

return (current);
}
