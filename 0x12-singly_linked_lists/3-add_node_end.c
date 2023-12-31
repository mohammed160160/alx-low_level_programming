#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head:Pointer to the first structure(element in the list).
 * @str: The string which is in the node along with the node's length.
 * Return: The address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *Nextone;
list_t *Temp;
Nextone = malloc(sizeof(list_t));
if (Nextone == NULL)
{
return (NULL);
}

Nextone->str = strdup(str);
Nextone->len = strlen(str);
Nextone->next = NULL;

if (*head == NULL)
{
*head = Nextone;
}
	else
	{
	Temp = *head;

	while (Temp->next != NULL)
	{
	Temp = Temp->next;
	}

	Temp->next = Nextone;
	}

return (Nextone);
}
