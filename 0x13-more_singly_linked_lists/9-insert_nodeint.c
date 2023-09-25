#include "lists.h"

/**
 * insert_nodeint_at_index - inserts the node at index of
 * a listint_t linked list.
 * @idx: The index where the node inserted
 * @head:A pointer to the first element of the list
 * @n: The data that is in the new node
 * Return: The location of the new index or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *inserted, *I, *J;
unsigned int x;

if (*head == NULL && idx != 0)
{ return (NULL); }

inserted = malloc(sizeof(listint_t));
if (inserted == NULL)
{ return(NULL); }

inserted->n = n;

J = *head;

if (idx == 0)
{
inserted->next = *head;
*head = inserted;
return (inserted);
}

for (x = 0; x < idx - 1; x++)
{
if (J == NULL)
{
free(inserted);
return (NULL);
}
J = J->next;
}

I = J->next;
J->next = inserted;
inserted->next = I;
return (inserted);

}
