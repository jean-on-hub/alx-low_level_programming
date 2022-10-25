#include "lists.h"
#include <stdio.h>

/**
 * listint_len - funtion
 *
 * Description: prints the number of elements in linked list
 *
 * @h: linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elements = 0;

	const listint_t *current_node = h;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		num_elements = 0;
	}
	return (num_elements);
}
