#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hashtable
 * @size: size of the table
 * Return: Null if fails in anyway
 */

hash_table_t *hash_table_create(unsigned long int size)
{
int i = 0;

if (size < 0)
{ return (NULL); }

hash_table_t *hash = (*hash_table_t) malloc(sizeof(hash_table_t));

if (hash == NULL)
{ return (NULL); }

hash->size = size;

table->array = (**array) malloc(table->size, sizeof(*array));

if (hash == NULL)
{
free(hash);
return (NULL);
}

for (i = 0; i < size; i++)
{
hash->array[i] = NULL;
}

return (hash);

}
