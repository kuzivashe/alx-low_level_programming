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
		if (i % 2 != 0)
		{
			n = _strlen(str[i] - 1) / 2;
			_putchar(n);
		}
		i++;
	}
}

