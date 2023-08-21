#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a:the first swap integer
 * @b:the second swap integer
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
