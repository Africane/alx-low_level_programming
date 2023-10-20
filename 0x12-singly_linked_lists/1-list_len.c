#include "lists.h"

/**
 * list_len - returns no. of elements in list_t list
 * @h: pointer to head of the list
 *
 * Return: no. of elements (nodes) in the list
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
