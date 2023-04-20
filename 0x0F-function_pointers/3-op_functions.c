#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of 2 numbers
 * @a: number a
 * @b: number b
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of 2 numbers
 * @a: number a
 * @b: number b
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of 2 numbers
 * @a: number a
 * @b: number b
 *
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of 2 numbers
 * @a: number a
 * @b: number b
 *
 * Return: the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 * @a: number a
 * @b: number b
 *
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
