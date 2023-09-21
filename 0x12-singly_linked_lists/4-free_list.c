#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head:Pointer to the first structure(element in the list).
 * Return: Nothing since this function job is freeing allocated space
 */

void free_list(list_t *head)
{
list_t *Future;

if (head == NULL)
{
return;
}

while (head->next != NULL)
{
Future = head->next;
free(head->str);
free(head);
head = Future;
}

free(head->str);
free(head);


}
