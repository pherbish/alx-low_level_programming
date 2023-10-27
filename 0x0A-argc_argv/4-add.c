#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main- adds the numbers
 * @argc:number of commands
 * @argv: array that contain cmd arguments
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
					return (1);
			}
		}
		add += atoi(argv[i]);
		printf("%d\n", add);
		return (0);
	}
}
