#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return no. of elements in linked list
 * @h: pointer to the list_t list
 *
 * Return: no. of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
