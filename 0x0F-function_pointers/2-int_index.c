#include "function_pointers.h"
/**
 * int_index - Returns the index place if comparison = true, else -1.
 * @array: The array.
 * @size: The size of elements in array.
 * @cmp: pointer to function of one of the 3 in main
 * Return: return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
