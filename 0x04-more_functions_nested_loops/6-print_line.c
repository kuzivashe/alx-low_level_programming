#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: number of times the line will print
 *
 * Return: returns a straightline.
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		putchar(95);
	}
	putchar('\n');
}
