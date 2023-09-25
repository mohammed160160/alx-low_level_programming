#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head:A pointer to the first element of the list
 * @index:The node that should be deleted
 * Return: 1 if successful -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *H;
listint_t *I;
listint_t *J;

unsigned int x = 0;

if (*head == NULL)
{ return(-1); }

if (index == 0)
{
free (*head);
return(1);
}

J = *head;

for (x = 0; x < index - 1;x++)
{
J = (*head)->next;
}

H = J;
J = J->next;
I = J->next;
free(J);
J = H;
J->next = I;

return (1);
}
