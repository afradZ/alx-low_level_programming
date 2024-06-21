#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ", ", and printed in ascending order.
 * You can only use the putchar function (every other function is forbidden).
 * You can only use putchar four times maximum in your code.
 * You are not allowed to use any variable of type char.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

