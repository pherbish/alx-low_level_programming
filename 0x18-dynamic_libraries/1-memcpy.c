#include "main.h"
/**
 * _memcpy-copies memory
 *@dest:destination
 *@src:source to copy
 *@n:number of bytes
 *Return:return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
