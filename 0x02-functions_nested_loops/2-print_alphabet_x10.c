#include "main.h"

/**
 * print_alphabet_x10 -prints athe alphabet in lowercase 10 times,
 * each followed by a new line
 *
 * Description: This function prints the lowercase letters of the alphabet
 * 10 times using the _putchar function. Each set of the alphabet is followed
 * by a new line character.
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
