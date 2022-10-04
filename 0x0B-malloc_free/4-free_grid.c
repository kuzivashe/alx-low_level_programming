#include "main.h"
#include <stdlib.h>

/**
  * free_grid - using free() to free previous grid
  * @grid:multidimensional array of integers
  * @height: height in ints
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
