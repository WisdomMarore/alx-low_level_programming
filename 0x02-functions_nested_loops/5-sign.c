#include "main.h"
#include <stdio.h>

/**
 * print_sign(int n) - prints the sign of a given number
 *
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		printf("+");
	}
	else if (n == 0)
	{
		return (0);
		printf("0");
	}
	else
	{
		return (-1);
		printf("-");
	
	}
}
