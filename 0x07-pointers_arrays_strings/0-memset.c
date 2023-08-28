#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: the memory area
 * @n: number of integers
 * @b: a constant byte
 *
 * Return: Always 0 (Success)
 */
 char *_memset(char *s, char b, unsigned int n)
{
        int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	
	}
	return (s);
	
}
