#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op _add - Returns the sum of a and b.
 * @a: num 1.
 * @b: num 2.
 *
 * Return: Nothing.
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: num 1.
 * @b: num 2.
 *
 * Return: Nothing.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b.
 * @a: num 1.
 * @b: num 2.
 *
 * Returns: Nothing.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b.
 * @a: num 1.
 * @b: num 2.
 *
 * Return: Nothing.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b.
 * @a: num 1.
 * @b: num 2.
 *
 * Return: Nothing.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
