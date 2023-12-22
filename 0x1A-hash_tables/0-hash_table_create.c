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

	if (table == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->size = size;
	return (table);
}
