#include "variadic_functions.h"
/**
 * print_all-prints all argument
 * @format:the format to be printed
 * Return:void
 */
void print_all(const char * const format, ...)
{
	int i, checker;
	char *str;
	va_list spc;

	va_start(spc, format);

	i = 0;
	while (format != NULL && format[i] != "\0")
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				checker = 0;
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				checker = 0;
				break;
			case 'c':
			printf("%c", va_arg(spc, int));
				checker = 0;
				break;

			case 's':
			str = va_arg(spc, char *);
			if (str == NULL)
			str = "(nill)";
			printf("%s", str);
			break;
			default:
			checker = 1;
			break;
			}
			if (format[i + 1] != "\0" && checker == 0)
			printf(", ");
			i++;
			}
			printf("\n");
			va_end(spc);
			}
