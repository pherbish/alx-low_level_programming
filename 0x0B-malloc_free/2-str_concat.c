#include"main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat-concatinates two strs
 * @s1:string1
 * @s2:second str
 *
 * Return:concatinated str
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, max;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		ptr[i] = s1[i];
	}
	for (max = 0; max <= j; max++)
	{
		ptr[i] = s2[j];
	}
return (ptr);
}	
