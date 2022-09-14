#include "main.h"

/**
  * print_alphabet_x10 - print alphabet 10 times
  *
  * Return: 0 Awalys
  */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (c = 'a'; c <= 'z'; c++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i);
		}
		_putchar(c);
	}
_putchar('\n');
return;
}
