#include "main.h"
#include <stdlib.h>
#include<stddef.h>
/**
 * _realloc-reallocates pointer to amemory
 * @ptr:former pointer
 * @old_size:old size before reallocation
 * @new_size:new allocated memory size.
 * Return:new allocation pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *old = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
	return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		max = old_size;
	}
	for (i = 0; i < max; i++)
	{
		p[i] = old[i];
	}
	free(ptr);
	return (p);
}



