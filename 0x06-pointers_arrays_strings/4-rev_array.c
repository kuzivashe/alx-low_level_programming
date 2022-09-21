#include "main.h"

/**
* reverse_array - reverses the content of an array
* @a: array
* @n: number of the array elements
* Return: no return
*/
void reverse_array(int *a, int n)
{
	int x, b, temp;

	for (x = 0; x < n - 1; x++)
	{
		for (b = x + 1; b > 0; b--)
		{
			temp = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = temp;
		}
	}
}
