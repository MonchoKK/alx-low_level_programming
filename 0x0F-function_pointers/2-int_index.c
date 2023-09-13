#include "function_pointers.h"

/**
 * int_index - Returns the index of the first element
 * @array: ...
 * @size: The number of elements in the array
 * @cmp: Pointer to the function to be used
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i = 0;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
		if (cmp(array[i]))
			return (i);
		i++;
		}
	}
	}
	return (-1);
}
