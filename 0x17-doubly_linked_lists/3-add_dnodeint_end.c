#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head:Pointer to the first structure(element in the list).
 * @n: The integer added to the list.
 * Return: The address of the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node, *extra;

node = malloc(sizeof(dlistint_t));

if (node == NULL)
{
return (NULL);
}

node->n = n;
node->next = NULL;
node->prev = NULL;

if (*head == NULL)
{ *head = node; }

else
{
	extra = *head;
	while (extra->next != NULL)
	{ extra = extra->next; }
	extra->next = node;
	node->prev = extra;
}
return(node);
}
