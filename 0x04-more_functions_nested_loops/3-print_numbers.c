#include <stdio.h>
#include "main.h"

/**
  * print_numbers - print numbers
  *
  * @c: input number
  *
  * Return: numbers 0 to 9
  */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
putchar('\n');
}
