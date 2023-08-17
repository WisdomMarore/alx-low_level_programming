#include "main.h"

/**
 * _isdigit - checks if given input is a digit from 0 to 9
 * @c: the input to be checked
 *
 * Return: 1 if c satisfies above condition 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (0);
		_putchar('\n');
	}
}
