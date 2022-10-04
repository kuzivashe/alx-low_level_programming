#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - a pointer to a 2 dimensional array of integers
  * @width: int of width
  * @height: int of height
  * Return: pointer of an array of integers
  */
int **alloc_grid(int width, int height)
{
	int **result;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	result = malloc(height * sizeof(int *));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		result[i] = malloc(width * sizeof(int));
		if (result[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(result[i]);
			}
			free(result);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			result[i][j] = 0;
		}
	}
	return (result);
}
