#include "main.h"
#include <stdlib.h>
/**
 * array_range-allocates memory to int of max amd min
 * @min:minimun int
 * @max:maximum int
 * Return:ptr to minimum to maximum int
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;
	ptr = malloc(sizeof(int) * j);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
