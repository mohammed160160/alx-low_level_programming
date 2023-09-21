#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h:A pointer to the first element of the list
 * Return: The number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
unsigned int current = 0;

for (current = 0; h != NULL ; current++)
{
h = h->next;
}

return (current);
}
