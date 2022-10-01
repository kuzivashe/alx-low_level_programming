#include "main.h"

/**
* _strchr - locates a character in a string
* @s:  pointer to a string
* @c: character in the string
* Return: a pointer to the first occurence of the character c in string s
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}
