#include <stdio.h>
#include <stdlib.h>
/**
 * main-multiplies two numbers
 * @argc:number of commands
 * @argv:string array
 * Return:0 when succesful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
