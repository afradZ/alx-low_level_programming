#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string that contains the binary number
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dv = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dv = 2 * dv + (b[i] - '0');
	}
	return (dv);
}
