#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table you want to add or update the key/val
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			flag = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
