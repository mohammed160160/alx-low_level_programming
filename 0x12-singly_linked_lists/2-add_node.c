#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the start of a linked list
 * @head:Pointer to the first structure(element in the list).
 * @str: The string which is in the node along with the node's length.
 * Return: The address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *Nextone;

Nextone = malloc(sizeof(list_t));

if (Nextone == NULL)
{
return (NULL);
}

Nextone->str = strdup(str);
Nextone->len = strlen(str);
Nextone->next = *head;

*head = Nextone;

return (*head);
}
