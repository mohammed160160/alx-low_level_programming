#include "lists.h"

/**
 * print_listint_safe - This function can print lists with a loop
 * @head:A pointer to the first element of the list
 * Return: The number of printed characters
 */

size_t print_listint_safe(const listint_t *head)
{
unsigned int length = 0;
const listint_t *Z = head;
const listint_t *X = head;

for (length = 0; head != NULL ; length++)
{
X = Z;
		while (head != X)
		{
		X = X->next;
			if (head != X && X->next == head->next)
			{
			head = head->next;
			printf("-> [%p] %i\n", (void *)head, head->n);
			return (length);
			}
		}

printf("[%p] %i\n", (void *)head, head->n);
head = head->next;
}

return (length);
}
