#include "main.h"

/**
  * _islower shows 1 if the input is a
  * lowercase character. Otherwise it shows 0
  *
  * Return: 1 for lowercase character and 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

