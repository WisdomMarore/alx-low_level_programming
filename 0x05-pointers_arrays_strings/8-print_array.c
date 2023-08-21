#include "main.h"

/**
 * print_array - prints array elements
 * @a:the array name
 * @n:the number of array elements
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}
	
