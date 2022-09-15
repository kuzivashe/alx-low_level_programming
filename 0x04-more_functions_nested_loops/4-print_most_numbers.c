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
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
