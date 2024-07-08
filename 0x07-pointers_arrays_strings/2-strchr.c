#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to character
 * @c: char parameters to be found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
