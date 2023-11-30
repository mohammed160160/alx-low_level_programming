#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hashtable
 * @size: size of the table
 * Return: Null if fails in anyway
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash;

hash = (hash_table_t*) malloc(sizeof(hash_table_t));

if (hash == NULL)
{ return (NULL); }

hash->size = size;
hash->array = (hash_node_t**) calloc(hash->size, sizeof(hash_node_t*));

if (hash->array == NULL)
{
free(hash);
return (NULL);
}

return (hash);
}
