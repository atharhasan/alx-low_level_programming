#include "hash_tables.h"
/**
 * hash_table_create - function creates a hash table
 * @size: is the size of the array
 * Return: the pointer to the table created or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t **arr = NULL;

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = arr;
	return (table);
}
