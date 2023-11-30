#include "hash_tables.h"

/**
 * hash_table_print - printing a hash_table
 * @ht:Hash table
 * Return: Always EXIT_SUCCESS.
 */

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *element;
unsigned long int size;
int flag = 0;

if (ht == NULL) /*checking parameters*/
{ return; }

printf("{");

for (size = 0; size < ht->size; size++)
{
element = ht->array[size];

if (element != NULL)
{

if (flag == 1)
{ printf(", "); }

printf("'%s': '%s'", element->key, element->value);
flag = 1;
}


}
printf("}\n");
}
