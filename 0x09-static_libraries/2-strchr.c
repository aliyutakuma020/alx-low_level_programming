#include "main.h"
/**
* _strchr - Find the first occurrence of a character in a string.
* @s: A pointer.
* @c: A character to find.
* Return: return 0 (success).
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
