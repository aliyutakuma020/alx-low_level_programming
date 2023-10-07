#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The amount of memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *mal;

	mal = malloc(b);
	if (mal == 0)
	{
		exit(98);
	}
	return (mal);
}
