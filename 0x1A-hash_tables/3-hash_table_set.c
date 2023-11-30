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
unsigned long int x = 0;

if (ht == NULL || key = NULL || value == NULL)
{ return(0); }

if (*key == '\0')
{ return(0); }

valuecopy = strdup(value);
if (valuecopy == NULL)
{ return(0); }

index = key_index((const unsigned char *)key, ht->size);


/*to check if the key exist and replaces it's value with the new*/
for(x = index; ht->array[x]; x++)
{
	if (strcmp(ht->array[x]->key, key) == 0)
	{
		free(ht->array[x]->value);
		ht->array[x]->value = valuecopy;
		return(1);
	}
}

/*to create a new element containing the key and the value*/










return (1);
}
