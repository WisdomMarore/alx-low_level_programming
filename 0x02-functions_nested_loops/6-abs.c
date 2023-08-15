#include "main.h"
#include <stdio.h>

/**
 * -abs(int n) - computes the absolute value of n
 *
 *  Return: the absolute value of n
 */
int _abs(int num)
{

	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
