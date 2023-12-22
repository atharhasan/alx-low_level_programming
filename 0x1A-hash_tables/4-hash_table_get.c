#include "hash_tables.h"
/**
 * hash_table_get - function retrieves a value associated with a key.
 * @ht: is the hash table you want to add or update the key/val
 * @key: is the key.
 * Return: the value element, or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *value;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	value = ht->array[index];

	while (value != NULL)
	{
		if (strcmp(value->key, key) == 0)
			return (value->value);
		value = value->next;
	}
	return (NULL);
}
