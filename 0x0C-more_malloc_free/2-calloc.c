#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc-Allocates memory for nmemb elements of size n
 * @nmemb:elements os an array
 * @size:the size of ach nmemb.
 *
 * Return:ptr to the array or null if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
