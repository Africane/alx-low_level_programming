#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds new node at end of list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to be duplicated and stored in new node
 *
 * Return: address of new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	if (*head == null)
		*head = new_node;
	else
	{
		list_t *temp = *head;
		while (temp->next)

			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
