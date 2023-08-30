#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: the first number
 * @y: the second number
 *
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
