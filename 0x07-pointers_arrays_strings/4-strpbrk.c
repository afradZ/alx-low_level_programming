#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for a set of bytes
 * @s: Pointer to character
 * @accept: pointer to character
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
