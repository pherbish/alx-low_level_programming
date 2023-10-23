#include "main.h"
/**
 * _strpbrk-main function
 * @s:first parameter
 * @accept:second parameter
 * Return:instance of occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}

