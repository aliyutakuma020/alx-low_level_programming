#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Convert a binary string to an unsigned int.
 * @b: Pointer to a string containing 0 and 1 characters.
 * Return: The converted number or 0 .
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int s;

	if (b == NULL)
	{
		return (0);
	}
	for (s = 0; b[s] != '\0'; s++)
	{
		if (b[s] == '0')
		{
			result = (result << 1);
		}
		else if (b[s] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
