#include "main.h"

int _strlen(char *s);

/**
  * main - checks code
  *
  * Return: Always EXIT_SUCCESS.
  */
int main(void)
{
	printf("%d\n", _strlen("My Dyn Lib"));
	return (0);
}

/**
  * _strlen - length of string
  * @s: string input
  * Return - length of string
  */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
