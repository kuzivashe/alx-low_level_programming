#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square of #s
 * @size: parameter
 * Return: nothing
 */
void print_square(int size)
{
	int sq1, sq2;

	if (size > 0)
	{
		for (sq1 = 0; sq1 < size; sq1++)
		{
			for (sq2 = 0; sq2 < (size - 1); sq2++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
