#include "lists.h"

/**
  * listint_len - returns the number of elements in a the linked list
  * @h: head of list
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
