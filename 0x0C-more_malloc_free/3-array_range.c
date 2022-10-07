#include "main.h"
#include <stdlib.h>

/**
  * array_range - array of integers
  * @min: minimum number possible
  * @max: maximum number
  * Return: a pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
