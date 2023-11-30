#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht:A hash table
 * Return: Always EXIT_SUCCESS.
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *element;
unsigned long int size;

if (ht == NULL) /*checking parameters*/
{ return; }

for (size = 0; size < ht->size; size++)
{
element = ht->array[size];

if (element != NULL)
{
free(element->key);
free(element->value);
free(element);
}

}

free(ht->array);
free(ht);
}
