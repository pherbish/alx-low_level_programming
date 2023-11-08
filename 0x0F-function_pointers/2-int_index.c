#include "function_pointers.h"
/*
 * int_index- function that search for an integer
 *
 * @array :target array
 * @size:size of the array
 * @cmp:pointer to the function
 * Return:integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != '\0')
			return (1);
	}
	return (-1);
}
