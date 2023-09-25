#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h:A pointer to the first element of the list
 * Return: The number of elements in the linked list
 */

size_t print_listint(const listint_t *h)
{
unsigned int length = 0;

for (length = 0; h != NULL ; length++)
{
printf("%i\n", h->n);
h = h->next;
}

return (length);
}
