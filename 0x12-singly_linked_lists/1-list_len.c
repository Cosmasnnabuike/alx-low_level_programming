#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns all the number of elements in linked list
 * @h: pointer to list all list_t
 *
 * Return: number of the elements in h
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
