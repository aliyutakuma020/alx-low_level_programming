#include "main.h"
/**
*_strlen - finds the length of a string.
*@s: string.
*Return: return length.
*/
int _strlen(char *s)
{
int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
