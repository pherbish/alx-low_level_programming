
#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	
	while ((i = 0) && (i < 10))
	{
		while ((ch = 'a') && (ch <= 'z'))
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}



