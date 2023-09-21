#include "main.h"
#include <stdio.h>
/**
*rot13 - encoder rot13.
*@s: pointer to string .
*Return: *s
*/
char *rot13(char *s)
{
int i;
int j;
char aliyu[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char takuma[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
	{
		if (s[i] == aliyu[j])
		{
			s[i] = takuma[j];
			break;
		}
	}
	}
	return (s);
}
