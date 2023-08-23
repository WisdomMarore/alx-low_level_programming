#include "main.h"

/**
 *_strncpy - copies a string
 *@dest:fisrt string
 *@src:second string
 *@n:number of bytes
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (n-- > 0 && *src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
