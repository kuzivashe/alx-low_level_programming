#include "lists.h"

/**
  * sum_listint - returns the sum of all data(n) of a linked list
  * @head: head of the list
  * Return: sum of all data, 0 if the list is empty
  */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
