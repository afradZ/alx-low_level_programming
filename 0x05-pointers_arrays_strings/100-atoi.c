#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}

	return (num * sign);
}

