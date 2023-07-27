#include "lists.h"

/**
 * list_len - finds length of list passed and
 * returns no. of nodes in list
 * @h: linked list to find length
 * Return: number of nodes in h
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned long int len = 0;

	temp = h;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}
