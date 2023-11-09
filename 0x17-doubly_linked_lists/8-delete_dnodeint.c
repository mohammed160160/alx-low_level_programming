#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head:A pointer to the first element of the list
 * @index:The node that should be deleted
 * Return: 1 if successful -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

dlistint_t *select;
unsigned int x = 0;

if (*head == NULL)
{ return (-1); }

select = *head;

if (index == 0)
{
if (select->next != NULL)
{
*head = select->next;
(select->next)->prev = NULL;
free(select);
}
return(1);
}

for (x = 0; x < index; x++)
{
select = select->next;	
if (select == NULL)
{ return (-1); }
}

if (select != NULL)
{
	(select->prev)->next = select->next;
	
	if (select->next != NULL)
	{ 
		(select->next)->prev = select->prev;
	}
free(select);
}
else
{ return(-1); }

return (1);
}
