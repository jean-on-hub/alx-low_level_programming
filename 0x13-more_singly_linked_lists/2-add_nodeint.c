#include "lists.h"

/**
 * add_nodeint - function
 * Description: adds a new node at the beginning of a listint_t list
 *
 * @head: address to the head pointer of the list
 * @n: integer to be added to the new node
 *
 * Return: address of the new node or NULL if it failed
 */
 
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;
	node = malloc(sizeof(listint_t));
  
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
