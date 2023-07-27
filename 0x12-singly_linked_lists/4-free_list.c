#include "lists.h"

/**
 * free_list - frees memory allocated for the linked list
 * @head: head pointer to linked list
 */
void free_list(list_t *head)
{
	list_t *temp, *temp1;

	if (head == NULL)
	{
		free(head);
		return;
	}

	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		temp1 = temp->next;
		free(temp);
		if (temp1 == NULL)
		{
			break;
		}
		temp = temp1;
	}
}

