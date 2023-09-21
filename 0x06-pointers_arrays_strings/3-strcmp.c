#include "main.h"
/**
*_strcmp - A function that compares two strings.
*@s1: pointer 1 to the string.
*@s2: pointer 2 to the string.
*
* Return: Return 0.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
