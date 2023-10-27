#include <stdio.h>
#include <stdlib.h>
/**
 * main-returns exactly one argument
 * @argc:number of commands
 * @argv: an array holding commands
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int cents, mncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
			mncoins += 1;
	}
	printf("%d\n", mncoin);
	return (0);
}

