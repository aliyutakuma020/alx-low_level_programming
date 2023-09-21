#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reverses an array of integers.
 * @a: Pointer to the integer array to be reversed.
 * @n: Number of elements in the array.
 *
 */
void reverse_array(int *a, int n)
{
int len;
int rev;
	for (len = 0; len < n / 2; len++)
	{
		rev = a[len];
		a[len] = a[n - len - 1];
		a[n - len - 1] = rev;
	}
}
