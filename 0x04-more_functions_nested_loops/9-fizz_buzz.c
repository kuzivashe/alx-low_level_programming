#include <stdio.h>

/**
 * main - program that prints a number
 * or Fizz or Buzz or FizzBuzz
 *
 * Return: nothing
 */
int main(void)
{
	int num = 1;

	while (num <= 99)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
		num++;
	}
	printf("Buzz\n");
	return (0);
}
