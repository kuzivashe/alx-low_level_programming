#include "main.h"

/**
* _strlen - prints the length of a string
* @s: input string
* Return: Always 0 on success
*/
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
