#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: The 1 number.
 * @b: The 2 number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: The 1 number.
 * @b: The 2 number.
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns product of two numbers.
 * @a: The 1  number.
 * @b: The 2 number.
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The 1 number.
 * @b: The 2 number.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of division of two numbers.
 * @a: The 1 number.
 * @b: The 2 number.
 * Return: The remainder division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
