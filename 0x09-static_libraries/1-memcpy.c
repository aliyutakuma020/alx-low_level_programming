#include "main.h"
/**
*_strncpy - copies a string to another.
*@dest: first pointer.
*@src: second pointer.
*@n: number of characters.
*Return: return (dest).
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
