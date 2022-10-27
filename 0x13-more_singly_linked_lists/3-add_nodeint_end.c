#include "lists.h"

/**
 * add_nodeint_end - function
 * Description: adds a new node at the end of a listint_t list
 *
 * @head: address to the head pointer of the list
 * @n: integer to be added to the new node
 *
 * Return: address of the new node or NULL if it failed
 */
 
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;

	return (node);
}
