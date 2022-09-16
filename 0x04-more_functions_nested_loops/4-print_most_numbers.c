#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - do not print all the numbers
 *
 * @c: input numbers
 *
 * Return: all numbers between 0 and 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 50 && x != 52)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
