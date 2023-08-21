#include "main.h"

/**
 *_strlen - returns the length of a given string
 *@s:the string for which the length is to be returned
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
