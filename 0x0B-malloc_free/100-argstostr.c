#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of your program into a string.
 * @ac: The number of arguments to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 * Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[n] = av[i][j];
			n++;
		}
		str[n] = '\n';
		n++;
	}

	str[n] = '\0';

	return (str);
}
