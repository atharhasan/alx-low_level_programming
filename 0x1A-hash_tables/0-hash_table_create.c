#include "hash_tables.h"
/**
 * hash_table_create - function creates a hash table
 * @size: is the size of the array
 * Return: the pointer to the table created or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));
	if (table == NULL || size <= 0)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;
return (table);
}
