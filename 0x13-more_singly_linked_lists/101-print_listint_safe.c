#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h:A pointer to the first element of the list
 * Return: The number of elements in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
unsigned int length = 0;
const listint_t *X = head;

for (length = 0; head != NULL ; length++)
{
printf("[%p] %i\n",(void *)head, head->n);
head = head->next;
	if (X == head)
	{
	break;
	}
}

return (length);
}
