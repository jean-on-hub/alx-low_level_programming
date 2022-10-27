#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of linked list
 * @idx: index to insert the node
 * @n: new node data
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  listint_t *current_node;
  listint_t *new_node;
  
  if (head == NULL)
    return (0);
  
  new_node = malloc(sizeof(listint_t));
  
  if (!new_node)
    return (0);
  
  new_node->next = NULL;
  new_node->n = n;
  
  if (idx == 0)
  {
    new_node->next = *head;
    (*head) = new;
    return (new_node);
  }
  
  current_node = *head;
  
  while (idx != 1)
  {
    current_node = current_node->next;
    --idx;
    
    if (current_node == NULL)
    {
      free(new_node);
      return (NULL);
    }
  }
  new_node->next = ccurrent_nodeurrent->next;
  current_node->next = new_node;
  return (new_node);
}
