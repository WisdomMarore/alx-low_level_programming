#include "main.h"
#include <stdio.h>

/**
 * print_last_digti(int n ) - prints the last digit of a number
 *
 * Return: the value of the last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
		printf("%d", last_digit);
	}
	return (last_digit);
}
