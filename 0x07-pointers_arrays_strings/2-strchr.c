#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string 
 * @c: the character to be located
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return s;
		s++;
	}
	return NULL;
}

