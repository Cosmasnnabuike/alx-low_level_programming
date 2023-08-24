#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list
 * @h: free list list_t
 */
void free_list(list_t *h)
{
	list_t *temp;

	while (h)
	{
		temp = h->next;
		free(h->str);
		free(h);
		h = temp;
	}
}
