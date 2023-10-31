#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array-pointer to characters
 * @c:characterpointed to
 * @size:the size of characters
 *
 * Return:null for empty allocation
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (i == size)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}




