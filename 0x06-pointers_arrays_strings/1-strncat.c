#include "main.h"
#include <string.h>
/**
 * _strncat-concatinates n bytes 
 * @dest:destinatio string
 * @src:source of string
 * @n:number of bytes to be concatinated
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = strlen(dest);
	int i;

		for (i = 0; i < n; &&*strc != '\0'; i++)
		{
			dest[dlen + i] = src[i];
			src++;
		}
		dest[dlen + i] = '\0';
		return (dest);
}
