#include "main.h"

/**
 * string_toupper - changes string lowercases to uppercases
 * @s: the string
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 'a' + 'A';
		}
		p++;
	}
	return (s);
}
