#include "main.h"
/**
 * _strspn-main function
 * @s:parameter  1
 * @accept:second parameter
 * Return:characters counted
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
					return (i);
					}
					return (0);
					}
					}
