#include "lists.h"

/**
 * free_listint_safe - frees a linked list of listint_t.
 * @h:A pointer to the first structure of the list.
 * Return: Nothing since it frees a structure
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *H;
unsigned int freed = 0;
int checker = 0;

if (h == NULL || *h == NULL)
{
return (freed);
}

while (*h != NULL)
{
checker = *h - (*h)->next;

if (checker > 0)
	{
	H = (*h)->next;
	free(*h);
	*h = H;
	freed++;
	}

else
	{
	break;
	}
}

free(*h);
*h = NULL;

return (freed + 1);
}
