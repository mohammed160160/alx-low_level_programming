#include "lists.h"

/**
 * sum_dlistint - calculates the sum of a linked list
 * @head:A pointer to the first element of the list
 * Return: The sum of the linked list elements
 */

int sum_dlistint(dlistint_t *head)
{
int x = 0;

if (head == NULL)
{
return (0);
}

while (head != NULL)
{
x += head->n;
head = head->next;
}

return (x);
}
