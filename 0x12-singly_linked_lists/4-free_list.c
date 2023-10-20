#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t list
 * @head: pointer to head of the list
 */

void free_list(list_t *head)
{
	while (head)
	{
		list_t *current_node = head;
		head = head->next;

		/*Free the duplicated string*/
		free(current_node->str);

		/*Free the current node*/
		free(current_node);
	}
}
