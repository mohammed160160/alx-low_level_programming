#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head:Pointer to the first structure(element in the list).
 * @n: The integer added to the list.
 * Return: The address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *G;
listint_t *H;

G = malloc(sizeof(listint_t));
if (G == NULL)
{
return (NULL);
}

G->n = n;

if (*head == NULL)
{
*head = G;
}

else
{

H = *head;

while (H->next != NULL)
{
H = H->next;
}

H->next = G;
}

return (G);
}
