#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: string to get the length of a string
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
