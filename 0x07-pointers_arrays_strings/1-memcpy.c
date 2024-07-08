#include "main.h"

/**
 * _memcpy - Copies memo area
 * @dest: Destination to memo area
 * @src: Source memo area
 * @n: Size 
 *
 * Return: Pointer to the destination memo area *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
