#include <stdio.h>

/**
  * main - prints the number of arguments passed to it
  * @argc: number of command line arguments
  * @argv: array that contains the command line arguments
  * Return: 0 as Success
  */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
