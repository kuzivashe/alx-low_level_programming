#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @x: variable to store the underscore
 * @n: number of times the line will print
 *
 * Return: returns a straightline.
 */
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		_putchar(95);
	}
_putchar('\n');
}
