#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: First string.
 * @s2: second string.
 * @n: number of bytes from s2 to concatenate to s1.
 * Return: return (0).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *cont;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		cont = malloc(sizeof(char) * (len1 + n + 1));
	else
		cont = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!cont)
		return (NULL);

	while (i < len1)
	{
		cont[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		cont[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		cont[i++] = s2[j++];

	cont[i] = '\0';
	return (cont);
}
