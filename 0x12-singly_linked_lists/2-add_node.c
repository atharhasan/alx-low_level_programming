i#include "lists.h"

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
	list_t *new_node;

	if (c)
	{
		while (head != NULL)
		{
			new_node->str = c;
			new_node->next = *head;
			*head = new_node;
		}
	}
	return (new_node);
}
