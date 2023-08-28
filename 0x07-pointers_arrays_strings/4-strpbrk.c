#include "main.h"

/**
 * _strpbrk - locates the first occurrence of a character
 * @s: first string
 * @accept: second string
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
				return (s);
		}
		s++;
	}
	return (NULL);
}
