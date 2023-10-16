#include <stdio.h>
/**
 *swap_int - swaps the values of two integers
 * swaps a to b when the function is called
 *@a:swaped to b
 *@b:swaped to a
 *@m:place holder during swapping
 */
void swap_int(int *a, int *b);
{
	int m;

		m = *a;
		*a = *b;
		*b = m;
}
