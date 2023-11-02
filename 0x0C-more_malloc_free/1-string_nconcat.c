#include "main.h"
#include<stdlib.h>
#include<stddef.h>
/**
 * string_nconcat-concatinates two strings then allocates memory
 * @s1:the first str
 * @s2:second str
 * @n:number of char to concatinates
 * Return:Null if it fails and ptr if success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *ptr;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (j > n)
	{
		j = n;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		ptr[k + i] = s2[k];
	}
	ptr[i + j] = '\0';
	return (ptr);
}


