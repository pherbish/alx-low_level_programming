#include "main.h"
/**
*puts2 - function should print only one character out of two
*starting with the first one
*@str: input
*Return: print
*/ 
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *x = str;
	int r;

	while (*x != '\0')
	{
		x++;
		longi++;
	}
	t = longi - 1;
	for (r = 0; r <= t; r++)
	{
		if (r % 2 == 0)
		_putchar(str[r]);
	}
	_putchar('\n');
}
