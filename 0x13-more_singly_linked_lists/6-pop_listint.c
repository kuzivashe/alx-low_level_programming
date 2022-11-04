#include "lists.h"

/**
  * pop_listint - deletes the head of a node linked list
  * @head: head of a linked list
  * Return: if empty return 0, head's node data
  */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;
	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
