#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
char *valuecopy;

if (ht == NULL || key = NULL || value == NULL)
{ return(0); }

if (*key == '\0')
{ return(0); }

valuecopy = strdup(value);

index = key_index((const unsigned char *)key, ht->size);

return (1);
}
