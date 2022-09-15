#include "main.h"

/**
 * more_numbers - print the same numbers multiple times
 *
 * @i: numbers from 0 to 14
 * @j: repeating the loop 10 times
 *
 * Return: repeated numbers
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
