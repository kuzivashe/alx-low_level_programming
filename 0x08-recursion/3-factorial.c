#include "main.h"

/**
  * factorial - prints a factorial of a given number
  * @n: input integer
  * Return: fcatorial of a given number
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
