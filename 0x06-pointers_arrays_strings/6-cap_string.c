#include "main.h"
/**
 * cap_string - Capitalizes all words in a string.
 * @ptr: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *ptr)
{
	int x = 0;

	while (ptr[x])
	{
		while (!(ptr[x] >= 'a' && ptr[x] <= 'z'))
			x++;
		if (ptr[x - 1] == ' ' ||
		ptr[x - 1] == '\t' ||
		ptr[x - 1] == '\n' ||
		ptr[x - 1] == '.' ||
		ptr[x - 1] == ',' ||
		ptr[x - 1] == '!' ||
		ptr[x - 1] == '?' ||
		ptr[x - 1] == '{' ||
		ptr[x - 1] == '}' ||
		ptr[x - 1] == ';' ||
		ptr[x - 1] == '(' ||
		ptr[x - 1] == ')' ||
		ptr[x - 1] == '"' ||
		x == 0)
		ptr[x] -= 32;
		x++;
	}
	return (ptr);
}
