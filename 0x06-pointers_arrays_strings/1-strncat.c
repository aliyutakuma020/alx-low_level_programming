#include "main.h"
/**
* _strncat - it concatenates two strings.
*@dest: Pointer to the destination string.
*@src: Pointer to the source string.
*@n: input value.
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int len1;
int len2;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (src[len2] != '\0' && len2 < n)
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';
	return (dest);
}
