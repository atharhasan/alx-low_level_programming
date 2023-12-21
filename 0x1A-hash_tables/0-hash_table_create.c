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

	table = malloc(sizeof(hash_table_t));

	if (table == NULL || size <= 0)
		return (NULL);

	table->size = size;
	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array = arr;
	return (table);
}
