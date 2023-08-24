#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node in the beginning of linked list
 * @h: double pointer to list the list_t
 * @str: add new string to the node
 *
 * Return: to address of new element, or NULL if it fails
 */
list_t *add_node(list_t **h, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)

		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*h);
	(*h) = new;

	return (*h);
}
