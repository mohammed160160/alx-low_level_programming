#include "lists.h"

/**
 * free_listint2 - frees a linked list of listint_t.
 * @head:A pointer to the first structure of the list.
 * Return: Nothing since it frees a structure
 */

void free_listint2(listint_t **head)
{
	listint_t *H;

	if (*head == NULL)
	{
	return;
	}

	while (*head != NULL)
	{
	H = (*head)->next;
	free(*head);
	*head = H;
	}
	
	*head = NULL;
}
