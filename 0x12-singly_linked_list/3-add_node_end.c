#include "lists.h"

/**
 * add_node_end - adds a node at end of list
 * @head: head pointer to linked list to be added
 * node at end
 * @str: variable to be used as data for added node
 * Return: pointer to newly added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *movable;
	char *strcopy;
	int len;

	len = strlen(str);
	temp = malloc(sizeof(list_t));
	strcopy = malloc(sizeof(char) * len);
	strcopy = strdup(str);
	temp->len = len;
	temp->str = strcopy;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	movable = *head;
	while (movable->next != NULL)
	{
		movable = movable->next;
	}
	movable->next = temp;
	return (temp);
}
