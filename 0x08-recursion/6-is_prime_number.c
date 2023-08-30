#include "main.h"

/**
 * is_prime_number - finds if a number is prime
 * @n: the number
 *
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n % n == 0 && n % 1 == 0)
	{
		return (1);
	}
}
