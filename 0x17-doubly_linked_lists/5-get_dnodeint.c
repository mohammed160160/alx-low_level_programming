#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node with the index value given
 * @head:A pointer to the first element of the list
 * @index:The number of the element wanted to return
 * Return: It returns the structure with the index value gives in case of
 * success or NULL in case of failure
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x = 0;

if (head == NULL)
{
return (NULL);
}

for (x = 0; x < index; x++)
{
	if (head == NULL)
	{
		return (NULL);
	}

head = head->next;
}

return (head);
}
