#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds new node at beginning of list_t list
 * @head: pointer to pointer to head of list
 * @str: string to be duplicated and stored in new node
 *
 * Return: address of new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
