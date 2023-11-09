#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts the node at index of
 * a listint_t linked list.
 * @idx: The index where the node inserted
 * @h:A pointer to the first element of the list
 * @n: The data that is in the new node
 * Return: The location of the new index or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *node, *extra;
unsigned int x;

if (*h == NULL && idx != 0)
{ return (NULL); }

node = malloc(sizeof(dlistint_t));
if (node == NULL)
{ return (NULL); }

node->n = n;
node->next = NULL;
node->prev = NULL;

if (idx == 0)
{
node->next = *h;
(*h)->prev = node;
*h = node;
return (node);
}

extra = *h;
for (x = 0; x < idx - 1; x++)
{
	if (extra == NULL)
	{
	free(node);
	return (NULL);
	}
	extra = extra->next;
}

if (extra->next != NULL)
{ (extra->next)->prev = node; }
node->next = extra->next;
node->prev = extra;
extra->next = node;

return (node);
}
