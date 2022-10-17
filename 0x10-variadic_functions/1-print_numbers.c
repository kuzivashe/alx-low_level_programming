#include "variadic_functions.h"

/**
  * print_numbers - print numbers separated by a string
  * @separator: string that separates the numbers
  * @n: amount of arguments
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	 printf("\n");
	 va_end(valist);
}
