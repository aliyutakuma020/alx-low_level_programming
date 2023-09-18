#include <stdio.h>
/**
 * swap_int - swaps the value of two integers.
 * @a: Pointer to the first interger
 * @b: Pointer to the second integer
*/
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
