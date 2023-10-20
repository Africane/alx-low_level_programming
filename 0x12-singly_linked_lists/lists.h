#ifndef LISTS_H
#define LISTS_H

/**
 * Author: David Owino
 * struct list_s - singly linked lists in C
 * @str: string
 * @len: length of str
 * @next: points to next node
 *
 * Description: singly linked lists node structure in C
 */

/* Definition of list_t structure*/
typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;

/*Function prototype for print_list*/
size_t print_list(const list_t *h);

/*Function prototype for list_len*/
size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_note_end(list_t **head, const char *str);

void free_list(list_t *head);

#endif
