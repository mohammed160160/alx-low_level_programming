#include "lists.h"

/**
 * reverse_listint - insert
 * @head:A pointer to the first element of the list
 * Return: The location of the new index or NULL if failed
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *I;
listint_t *J;


if (*head == NULL || head == NULL)
{
return (NULL);
}

I = *head;
J = NULL;

while(*head != NULL)
{
*head = (*head)->next;
I->next = J;
J = I;
I = *head;
}

*head = J;

return (*head);
}
