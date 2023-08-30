#include "main.h"

/**
 * _sqrt_recursion - finds the square root of a number
 * _sqrt_recursion_helper - helps in finding the square root
 * @n: the number
 *
 * Return: Always 0 (Success)
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i *  i > n)
		return (-1);
	return (_sqrt_recursion_helper(n, i + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 0));
}
