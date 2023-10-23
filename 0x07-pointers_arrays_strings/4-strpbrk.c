#include "main.h"
/**
 * _strpbrk-main function
 * @s:first parameter
 * @accept:second parameter
 * Return:instance of occurence
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *b = accept;

		while (*b != '\0')
		{
			if (*s == *b)
				return (s);
		a++;
		}
		s++;
	}
	return (NULL);
}
