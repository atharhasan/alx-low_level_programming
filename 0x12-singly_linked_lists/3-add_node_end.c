#include "lists.h"

/**
 * add_node - function that can add new node
 * @head: pointer from struct
 * @str: the value of new node
 *
 * Return: the address of new element
*/

list_t *add_node(list_t **head, const char *str)
{
	char *c = strdup(str);
	list_t *new_node = malloc(sizeof(list_t));

	if (!head || !new_node)
		return (NULL);

	if (str)
	{
		new_node->str = c;
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(new_node->str);
	}
	new_node->next = NULL;
	new_node = *head;
	return (new_node);
}
