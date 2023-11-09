#include "variadic_functions.h"
/**
 * print_numbers-print passed numbers
 * @separator:pointer to string
 * @n:number of numbers to be printed
 * Return :numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, r;

	va_list ptr;
	
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		r = va_arg(ptr, const unsigned int);
		printf("%d", r);

		if (i != n - 1  && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}

