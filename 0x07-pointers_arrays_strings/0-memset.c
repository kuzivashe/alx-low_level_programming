#include "main.h"

/**
* _memset - fills the first n bytes of memory
* @s: pointer to a character
* @b: constant byte
* @n: bytes filled
* Return: @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
