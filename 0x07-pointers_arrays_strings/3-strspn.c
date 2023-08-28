#include "main.h"

/**
 * _strspn - gets the length of string prefix
 * @s: the string
 * @accept: bytes to search for
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
