#include "lists.h"

/**
 * print_listint_safe - This function can print lists with a loop
 * @head:A pointer to the first element of the list
 * Return: The number of printed characters
 */

size_t print_listint_safe(const listint_t *head)
{
unsigned int length = 0;
const listint_t *X = head;
const listint_t *Y = head;


for (length = 0; X != NULL; length++)
{
printf("[%p] %i\n", (void *)X, X->n);


X = X->next;

if (Y != NULL)
{

Y = Y->next;
	if (Y != NULL)
	{
	Y = Y->next;
	}
}

	if ((X == Y) &&(X != NULL))
	{
	printf("-> [%p] %i\n", (void *)X, X->n);
	return (length + 1);
	}

}

return (length);
}
