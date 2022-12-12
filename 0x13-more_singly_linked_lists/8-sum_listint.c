#include "lists.h"

/**
 * sum_listint - sums the values of a listint_t linked list
 * @head: pointer to the list head
 *
 * Return: sum of the values
 */
 
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
