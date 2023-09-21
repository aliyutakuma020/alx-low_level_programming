#include "main.h"
/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @n: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *n)
{
int UP = 0;

	while (n[UP] != '\0')
	{
		if (n[UP] >= 'a' && n[UP] <= 'z')
			n[UP] = n[UP] - 32;
		UP++;
	}
	return (n);
}
