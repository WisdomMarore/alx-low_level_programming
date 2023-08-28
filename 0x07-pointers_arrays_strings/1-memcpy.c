#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 *
 * Return Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	
	while (n--)
		*p++ = *src++;
	return (dest);
}
