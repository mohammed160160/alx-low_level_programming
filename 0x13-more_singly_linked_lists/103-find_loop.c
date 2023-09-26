#include "lists.h"

/**
 * find_listint_loop -  function that finds the loop in a linked list.
 * @head:A pointer to the first element of the list
 * Return: The address or NULL if there isnt one.
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *X = head;
listint_t *Y = head;


if (X == NULL)
{
	return (NULL);
}



while (X != NULL && Y != NULL && Y->next != NULL)
{
X = X->next;
Y = Y->next->next;

		if (X == Y)
		{
			X = head;
			while (X != Y)
			{
			X = X->next;
			Y = Y->next;
			}
		return (Y);
		}
}

return (NULL);
}
