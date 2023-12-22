#include "hash_tables.h"
/**
 * hash_table_set - function adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/val
 * @key: is the key.
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;

	if (key == NULL)
		return (0);
	item = malloc(sizeof(hash_node_t));
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	if (item->key == NULL || item->value == NULL)
		return (0);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (1);
}
