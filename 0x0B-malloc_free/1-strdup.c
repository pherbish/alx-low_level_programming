#include"main.h"
#include<stdlib.h>
/**
 * _strdup-assigns pointer to anew str
 * @str:the duplicate str
 *
 * Return:memor location of str
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *strd;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	strd = (char *)malloc(sizeof(char) * (i + 1));
	if (strd == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		strd[j] = str[i];
	}
	return (strd);
}
