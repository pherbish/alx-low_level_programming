#include "main.h"
/**
 * _strlen_recursion-gives the str length
 * @s:the str
 * Return:length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_str-compares string
 * @left:left check
 * @right:checks right
 * @s:str
 * Return:strlen
 */
int compare_str(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
		{
			return (1);
			return (0 + compare_str(s, left + 1, right - 1));
		}
		return (0);
	}
}
/**
 * is_palindrome-checks similarity
 * @s:str
 * Return:palidrone
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
		return (compare_str(s, 0, _strlen_recursion(s) - 1));
	}
}


