#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && f != NULL)
		f(name);

}
