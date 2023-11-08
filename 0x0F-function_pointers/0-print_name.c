#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name-prints the name
 * @name:is the name to be printed
 * @f:pointer to the function printing the name
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
