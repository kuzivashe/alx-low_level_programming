#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates 2 strings
  * @s1: first string
  * @s2: second string
  * @n: amount of bytes
  * Return: a pointer pointing to the newly allocated space in memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int ss1, ss2, ss3, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ss1 = 0; s1[ss1] != '\0'; ss1++)
		;

	for (ss2 = 0; s2[ss2] != '\0'; ss2++)
		;

	if (n > ss2)
		n = ss2;

	ss3 = ss1 + n;

	s3 = malloc(ss3 + 1);
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < ss3; i++)
	{
		if (i < ss1)
		{
			s3[i] = s1[i];
		}
		else
		{
			s3[i] = s2[i - ss1];
		}
	}
	s3[i] = '\0';
	return (s3);
}
