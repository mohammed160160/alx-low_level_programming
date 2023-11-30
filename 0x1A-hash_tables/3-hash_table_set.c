#include "hash_tables.h"

/**
 * hash_table_set - check the code for
 * @key:The key to the value
 * @value: The value of the key
 * @ht: The hash table
 * Return: Always EXIT_SUCCESS.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
char *valuecopy;
unsigned long int x = 0, index;
hash_node_t *element;

if (ht == NULL || key == NULL || value == NULL) /*checking parameters*/
{ return(0); }
if (*key == '\0') /*checking if the string in key is empty or not*/
{ return(0); }
valuecopy = strdup(value);/*duplicating the value*/
if (valuecopy == NULL)
{ return(0); }
index = key_index((const unsigned char *)key, ht->size);

/*to check if the key exist and replaces it's value with the new*/
for (x = index; ht->array[x]; x++)
{
	if (strcmp(ht->array[x]->key, key) == 0)
	{
		free(ht->array[x]->value);
		ht->array[x]->value = valuecopy;
		return (1);
	}
}
/*to create a new element containing the key and the value*/
element = malloc(sizeof(hash_node_t));
if (element == NULL)
{ free(valuecopy);
return (0); }

element->key = strdup(key);
if (element->key == NULL)
{ free(element);
free(valuecopy);
return (0); }

element->value = valuecopy;
element->next = ht->array[index];
ht->array[index] = element;

return (1);
}
