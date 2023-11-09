#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the start of a double linked list
 * @head:Pointer to the first structure(element in the list).
 * @n: The integer added to the list.
 * Return: The address of the new element.
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *G;

G = malloc(sizeof(dlistint_t));

if (G == NULL)
{
return (NULL);
}

G->n = n;
G->next = *head;
G->prev = NULL;

*head = G;

return (*head);
}
