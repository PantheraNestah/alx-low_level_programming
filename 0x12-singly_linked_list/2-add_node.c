#include "lists.h"

/**
 * add_node - adds a node at beginning of
 * linked list
 * @head: pointer to head pointer of list
 * @str: string to store as node data
 * Return: head pointer of linked list after insertion
 * null on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	char *strcopy;
	unsigned int len;

	len = strlen(str);

	strcopy = malloc(sizeof(char) * len);
	temp = malloc(sizeof(list_t) * 1);

	strcopy = strdup(str);
	temp->str = strcopy;
	temp->len = len;
	temp->next = *head;
	*head = temp;

	return (*head);
}
