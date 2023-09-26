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

if (*h == NULL)
{ return (freed); }

while (*h != NULL)
{

if ((*h)->next != NULL)
{
checker = *h - (*h)->next;
}
	else
	{
	free(*h);
	*h = NULL;
	freed++;
	break;
	}

if (checker > 0)
{
H = (*h)->next;
free(*h);
*h = H;
freed++;
}

	else
	{
	free(*h);
	*h = NULL;
	freed++;
	break;
	}
}

*h = NULL;
return (freed);
}
