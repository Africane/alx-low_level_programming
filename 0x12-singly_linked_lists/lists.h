#ifndef LISTS_H
#define LISTS_H

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

#endif
