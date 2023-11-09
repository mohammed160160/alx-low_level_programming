#include "lists.h"

/**
 * dlistint_len - prints the number of elements in the list
 * @h:A pointer to the first element of the list
 * Return: The number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
unsigned int length = 0;

for (length = 0; h != NULL ; length++)
{
h = h->next;
}

return (length);
}
