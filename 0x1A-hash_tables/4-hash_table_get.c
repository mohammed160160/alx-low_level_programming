#include "hash_tables.h"

/**
 * hash_table_get - gets a value of the key in the hash table
 * @ht: The hash table
 * @key: The key to get the value for
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *element;
unsigned long int index;

if (ht == NULL || key == NULL) /*checking parameters*/
{ return (NULL); }

if (*key == '\0') /*checking if the string in key is empty or not*/
{
return (NULL);
}

index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
{
return (NULL);
}

element = ht->array[index];

while (element != NULL)
{
	if (strcmp(element->key, key) == 0)
	{
	return (element->value);
	}
element = element->next;
}

return (NULL);
}
