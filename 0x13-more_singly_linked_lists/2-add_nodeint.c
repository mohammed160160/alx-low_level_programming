#include "lists.h"

/**
 * add_nodeint - Adds a new node at the start of a linked list
 * @head:Pointer to the first structure(element in the list).
 * @n: The integer added to the list.
 * Return: The address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *G;

G = malloc(sizeof(listint_t));

if (G == NULL)
{
return (NULL);
}

G->n = n;
G->next = *head;

*head = G;

return (*head);
}
