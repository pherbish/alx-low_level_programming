#include "main.h"
/**
 * _strcat - concatanates two strings to give one
 * @dest:destination string
 * @src:source string
 * Return:returns dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen;
	int slen;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dlen++;
	for (i = 0; src[i] != '\0'; i++)
		slen++;
	for (i = 0; i <= slen; i++)
		dest[dlen + i] = src[i];
	return (dest);
}

