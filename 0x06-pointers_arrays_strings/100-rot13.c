#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: The string to be encoded
 *
 * Return: The pointer to the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 =   "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*ptr == letters[i])
			{
				*ptr = rot13[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
