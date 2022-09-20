#include "main.h"

/**
* puts_half - prints only half of the string
* @str: input string
* Return: nothing
*/
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		i++;
	}
	if (i % 2 == 1)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}
	for (n++, n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

