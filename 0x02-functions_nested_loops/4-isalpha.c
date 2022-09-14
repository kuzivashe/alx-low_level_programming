#include "main.h"
/**
  * _isalpha - checks if input is alphabet
  * @c: The character in ASCII code
  * Return: 1 for letters otherwise 0
  */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
