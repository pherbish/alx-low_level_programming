#include "main.h"
/**
 * _strstr-main function
 * @needle:string to search
 * @haystack:string for search
 * Return:str
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *k = needle;

		while (*i == *k && *k != '\0')
		{
			i++;
			k++;
		}
		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
