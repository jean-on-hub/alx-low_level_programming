#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function
 *
 * Description: print elements of linked list
 *
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	const listint_t *current_node = h;

	while (current_node != NULL)
	{
		printf("i\n", current_node->n);
		current_node = current_node->next;
		num_nodes++;
	}
	return (num_nodes);
}
