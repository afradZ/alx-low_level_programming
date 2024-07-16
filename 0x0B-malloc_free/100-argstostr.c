#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0;

	char *result, *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++;
	}
	total_len++;

	result = malloc(total_len * sizeof(char));
	if (result == NULL)
		return (NULL);

	ptr = result;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			*ptr++ = av[i][j];
		*ptr++ = '\n';
	}
	*ptr = '\0';

	return (result);
}

