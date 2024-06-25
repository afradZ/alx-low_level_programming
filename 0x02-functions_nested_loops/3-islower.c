#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Description: This function checks if a character is a lowercase
 * letter. If the character is lowercase, it returns 1. Otherwise,
 * it returns 0.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

