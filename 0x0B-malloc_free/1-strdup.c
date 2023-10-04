#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns pointer to a new string which is duplicate of the string.
 * @str: the string.
 * Return: NULL if str = NULL.
 */
char *_strdup(char *str)
{
int len = 0;
char *duplicate;
int c;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (c = 0; str[c]; c++)
	{
		duplicate[c] = str[c];
	}
	return (duplicate);
}
