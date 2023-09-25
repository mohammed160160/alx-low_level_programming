#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h:A pointer to the first element of the list
 * Return: The number of elements in the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
	return(NULL);
	}

head = head->next;
}

return(head);


}
