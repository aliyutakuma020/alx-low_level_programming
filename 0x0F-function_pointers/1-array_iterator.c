#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Prints each array element.
 * @array: the array.
 * @size: sizee of elem to print.
 * @action: pointer to print in regular.
 * Return: return void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
