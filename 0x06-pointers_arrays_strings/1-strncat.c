#include "main.h"
/**
* _strncat - it concatenates two strings.
*@dest: Pointer to the destination string.
*@src: Pointer to the source string.
*@n: number od byte.
*
* Return: (dest).
*/
char *_strncat(char *dest, char *src, int n)
{
int len_dest;
int j;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	for (j = 0; src[j] && j < n; j++)
	{
		dest[len_dest + j] = src[j];
	}
	dest[len_dest + j] = '\0';
	return (dest);
}
