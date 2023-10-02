#include "main.h"
/**
* _strncpy - to copy a string.
* @dest: first pointer.
* @src: second pointer.
* @n: number of value.
* Return:return dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

	while (dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
