#include "lists.h"

/**
 * free_dlistint - frees a linked list of listint_t.
 * @head:A pointer to the first structure of the list.
 * Return: Nothing since it frees a structure
 */

void free_dlistint(dlistint_t *head)
{
if (head == NULL)
{ return; }

while (head->next != NULL)
{
head = head->next;
free(head->prev);
}

free(head);
}
