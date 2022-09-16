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

	while (num++ < 100)
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
			if (num != 100)
			{
				printf("Buzz ");
			}
			printf("Buzz");
		}
	}
printf("\n");
return (0);
}