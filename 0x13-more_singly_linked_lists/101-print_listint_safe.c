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
const listint_t *Y = head;
const listint_t *X = head;

for (length = 0; head != NULL ; length++)
{
X = Z;
		while (X != Y)
		{
		X = X->next;
			if ((X->next == Y->next) && (X != Y))
			{
			printf("-> [%p] %i\n", (void *)head, head->n);
			return (length);
			}
		}

printf("[%p] %i\n", (void *)head, head->n);
Y = head;
head = head->next;
}

return (length);
}
