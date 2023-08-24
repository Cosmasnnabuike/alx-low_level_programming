#include <stdio.h>
#include "lists.h"

/**
* print_list - print the elements of all the linked list
* @h: pointer to the list_t list to be print
*
* Return: The numb of nodes printed
*/
size_t print_list(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		y++;
	}
	return (y);
}
