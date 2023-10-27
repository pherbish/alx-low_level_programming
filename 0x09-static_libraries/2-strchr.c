#include"main.h"
#include<stddef.h>
/**
 * _strchr-searches for maching character
 * @s:main string
 * @c:character for search
 * Return:s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}


