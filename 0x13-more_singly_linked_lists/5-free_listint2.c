#include "lists.h"

/**
  * free_listint2 - frees a linked list
  * @head: head of a list
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((temp = new) != NULL)
		{
			new = *head;
			free(temp);
		}
		*head = NULL;
	}
}
