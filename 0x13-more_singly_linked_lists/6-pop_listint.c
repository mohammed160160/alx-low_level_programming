#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head:A pointer to the first element of the list
 * Return: head node’s data or 0 if failed
 */

int pop_listint(listint_t **head)
{
int x = 0;
listint_t *H;


if (*head == NULL)
{
return (0);
}

H = (*head)->next;
x = (*head)->n;
free(*head);
*head = H;

return (x);
}
