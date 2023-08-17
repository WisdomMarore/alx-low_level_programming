#include "main.h"

/**
 * more_numbers - prints fro 10 times the numbers 0 to 14
 *
 * Return: 10 times the umnbers 0 to 14
 */
void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 15; c++)
		{
			_putchar(c);
			_putchar('\n');
		}
	}
}
