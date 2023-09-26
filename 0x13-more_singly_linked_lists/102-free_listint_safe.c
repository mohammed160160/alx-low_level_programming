#include "lists.h"

/**
 * free_listint2 - frees a linked list of listint_t.
 * @head:A pointer to the first structure of the list.
 * Return: Nothing since it frees a structure
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *H;

if (head == NULL)
{
return;
}

while (H != NULL)
{
H = (*head)->next;
free(*head);
*head = H;
}

free(*head);
*head = NULL;
}
