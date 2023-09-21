#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h:A pointer to the first element of the list
 * Return: The number of elements in the linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *Nextone;

Nextone = malloc(sizeof(list_t));

Nextone->str = strdup(str);
Nextone->len = strlen(str);
Nextone->next = *head;


*head = Nextone;

return(*head);
}
