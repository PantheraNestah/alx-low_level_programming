#include "lists.h"

/**
 * print_list - prints a linked list's nodes
 * @h: head pointer of list to print
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned long int i = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{	
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		i++;
		temp = temp->next;
	}

	return (i);

}
