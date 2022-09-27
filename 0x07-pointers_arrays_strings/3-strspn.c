#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: initial segment
* @accept: accepted bytes
* Return: the number of accepted bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[i])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}