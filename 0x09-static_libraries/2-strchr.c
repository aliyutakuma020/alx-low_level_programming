#include "main.h"
#include <stddef.h>

/**
 * _strchr - checks the first character.
 * @s: input 1.
 * @c: input 2.
 * Return: Always 0 (Success).
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
