#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcode-prints the opcode
 * @a:addres of the main
 * @n: sizevof bytes
 * Return:opcodes
 */
void print_opcode(char *a, int n)
{
	int i;
	
	for (i = 0; i < a; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
		printf('\n');
	}
}
/**
 * main-prints opcodes of its main function
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
			exit(2);
	}
	print_opcode((char *)&main, n);
	return (0);
}
