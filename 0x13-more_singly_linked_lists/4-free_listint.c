#include "lists.h"

/**
 * free_listint - frees a linked list of listint_t.
 * @head:A pointer to the first structure of the list.
 * Return: Nothing since it frees a structure
 */

void free_listint(listint_t *head)
{
listint_t *H;

if (head == NULL)
{
return;
}

while (head->next != NULL)
{
H = head->next;
free(head);
head = H;
}

free(head);

}
