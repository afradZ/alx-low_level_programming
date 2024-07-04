#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: The string to be encoded
 *
 * Return: The pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char rot13_map[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			j = (str[i] - 'A') % 26;
			if (str[i] >= 'a')
			j += 26;
			str[i] = rot13_map[j];
		}
	}

	return (str);
}

