#include "main.h"
/**
* _memset - To fill a block of memory with a specified value.
* @s: A pointer to the starting address of the memory block you want to fill.
* @b: the value that you want to fill the memory block with.
* @n: The number of bytes to be set to the value b.
* Return: A pointer to the memory block `s`.
*/
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}
