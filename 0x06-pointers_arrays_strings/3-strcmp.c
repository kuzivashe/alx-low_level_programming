#include "main.h"

/**
* _strcmp - compares 2 strings
* @s1: first string
* @s2: second string
* Return: 0 if s1 and s2 are equal
* another number otherwise
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0;

	while (x == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + x) == '\0'))
		{
			break;
		}
		x = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (x);
}
