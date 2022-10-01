#include "main.h"

/**
* _strcat - concatenate strings dest to src
* @dest: destination character
* @src: source character
* Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (*(dest + i) != '\0')
	{
		continue;
	}
	while (n >= 0)
	{
		*(dest + i) = *(src + n);
		if (*(src + n) == '\0')
		{
			break;
		}
		i++;
		n++;
	}
	return (dest);
}
