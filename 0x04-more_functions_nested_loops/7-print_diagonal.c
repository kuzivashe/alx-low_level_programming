#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonally
 * @n: parameter
 * Return: nothing
 */
void print_diagonal(int n)
{
	int length, blank;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (blank = 0; blank < length; blank++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (length == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
