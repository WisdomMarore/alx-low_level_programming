#include "main.h"

/**
 * print_numbers - prints digits 0 to 9
 *
 * Return: numbers 0 to 9
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
}

