#include <stdio.h>
#include "lists.h"
/**
 * print _list - print all elements of list_t
 * @h: pointer to head of list
 *
 * Return:number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else 
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node_count++;
	}

	return (node_count);
}
