#include "lists.h"

/**
  * add_node_end - adds node at the end of the list
  * @head: head of the list
  * @str: string to be stored in here
  * Return: address of the head
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->str = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
