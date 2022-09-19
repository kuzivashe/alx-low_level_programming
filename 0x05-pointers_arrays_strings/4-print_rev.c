#include "main.h"

/**
* print_rev - prints string in reverse
* @s: input string
* Return: nothing
*/
void print_rev(char *s)
{
	int back = 0;

	while (back >= 0)
	{
		if (s[back] == '\0')
		{
			break;
		}
		back++;
	}
	for (back--; back >= 0; back--)
	{
		_putchar(s[back]);
	}
	_putchar('\n');
}
