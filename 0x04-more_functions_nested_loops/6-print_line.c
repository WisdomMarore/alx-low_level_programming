#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * Return: a straight line in the terminal
 */
void print_line(int n)
{
	for (n = 0; n < 50; n++)
	{
		if (n > 0)
		{
			_putchar('_');
			_putchar('\n');
	        }
		else
		{
		_putchar('\n');
		}
	}
}
