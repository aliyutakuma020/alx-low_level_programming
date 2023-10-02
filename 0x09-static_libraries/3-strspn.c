#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be checked.
 * @accept: The characters to search for in the string.
 * Return: Always 0 (Success).
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
