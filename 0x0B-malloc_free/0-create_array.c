#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array and initialises it with a specific char
  * @size: size of the array
  * @c: character stored
  * Return: NULL if size is 0, a pointer to the array or
  * NULL if it fails.
  */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(c) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	n = 0;
	while (n < size)
	{
		a[n] = c;
		n++;
	}

	return (a);
}

