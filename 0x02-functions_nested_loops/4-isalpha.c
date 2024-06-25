#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to check.
 *
 * Description: This function checks if a character is an alphabetic
 * letter. If the character is an alphabetic letter (either lowercase
 * or uppercase), it returns 1. Otherwise, it returns 0.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

