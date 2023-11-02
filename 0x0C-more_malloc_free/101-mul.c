#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * is_digit-checks for characters
 * @s:str to be evaluated.
 * Return:digit
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < "0"; || s[i] > "9")
		{
			return (0);
			i++;
		}
	}
		return(1);
	}

/**
 * _strlen-determines length of str
 * @s:string for evaluation
 * Return: str
 */
int _strlen( char *s)
{
	int i = 0;

	while (s[i] != '\0';)
	{
		i++;
	}
	return (i);
}

/**
 * error-handles error
 */
void error()
{
	printf("Error\n");
	exit(98);
	}
/**
 * main-multipliers two positive numbers
 * @arg:argument
 * @argo;second arg
 * Return:0
 */
int main (int arg, char *argo[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, dgit2, *result, a = 0;
	s1 = argo[1], s2 = argo[2]
	if (

