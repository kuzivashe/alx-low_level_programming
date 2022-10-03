#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: string
  * Return: a pointer to a duplicate string otherwise NULL
  */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		copy[j] = str[j];
	}
	return (copy);
}
