#include "main.h"
#include<stdlib.h>
#include<stddef.h>
/**
 * malloc_checked-returns pointer to allocated memory
 * @b:int pointed by the pointer
 * Return:pointer to memory location or terminates
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
