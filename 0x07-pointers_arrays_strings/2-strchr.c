#include "main.h"
/**
*_strchr - Locates a character in a string.
*@s: A pointer to the string to search.
*@c: The character to locate.
*Return: Always 0 (Success).
*/
char *_strchr(char *s, char c)
{
int k = 0;

	while (s[k] != '\0')
	{
		if (s[k] == c)
		{
			return (&s[k]);
		}
		k++;
	}
	return (0);
}
