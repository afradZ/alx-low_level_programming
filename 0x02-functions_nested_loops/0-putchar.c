#include "main.h"

/**
 * main Entry point
 *
 * Retuen: always 0 (Success)
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


