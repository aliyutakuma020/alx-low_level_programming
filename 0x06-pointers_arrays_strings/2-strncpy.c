#include "main.h"
/**
*_strncpy- A function that copies a string to another.
*@dest: Pointer to the destination string.
*@src: Pointer to the source string.
*@n: input number.
*Return: Return  dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int len2 = 0;
	while (src[len2] != '\0' && len2 < n)
	{
		dest[len2] = src[len2];
		len2++;
	}
	while (len2 < n)
	{
		dest[len2] = '\0';
		len2++;
	}
	return (dest);
}
