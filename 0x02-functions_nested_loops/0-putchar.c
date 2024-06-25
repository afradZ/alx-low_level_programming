#include "main.h"

/**
 * main Entry point
 *
 * Description: A program that prints _putchar followed by a new line.
 * Return: always 0 (Success)
 */

int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

	return (0);
}


