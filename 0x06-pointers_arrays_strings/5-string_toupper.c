#include "main.h"

/**
* string_toupper - changes lowercase letters to uppercase
* @c: input string
* Return: a pointer to dest
*/
char *string_toupper(char *c)
{
	int count = 0;

	while (*(count + c) != '\0')
	{
		if ((*(count + c) >= 97) && (*(count + c) <= 122))
		{
			*(count + c) = *(count + c) - 32;
		}
		count++;
	}
	return (c);
}
