#include "variadic_functions.h"
/**
 * print_strings-prints strings arguments
 * @separator:strings to be printed pointer
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ptr_str;
	
	va_start(ptr_str, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr_str, char *);
		if (str == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
