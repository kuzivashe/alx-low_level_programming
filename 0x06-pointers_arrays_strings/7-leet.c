#include "main.h"

/**
* leet - encodes a string into 1337
* @s: input string
* Return: a pointer to dest
*/
char *leet(char *s)
{
	int i, count = 0;
	int small_letters[] = {97, 101, 111, 116, 108};
	int big_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == small_letters[i] || (*(s + count) == big_letters[i]))
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
