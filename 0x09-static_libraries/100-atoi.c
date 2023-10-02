#include "main.h"
/**
*_atoi - converts a string to integer.
*@s: the string.
*Return: integer.
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
