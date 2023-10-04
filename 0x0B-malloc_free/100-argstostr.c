#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - main entry.
 * @ac: int input.
 * @av: double pointer array.
 * Return: return (0);
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *conct;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	conct = malloc(sizeof(char) * l + 1);
	if (conct == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		conct[r] = av[i][n];
		r++;
	}
	if (conct[r] == '\0')
	{
		conct[r++] = '\n';
	}
	}
	return (conct);
}
