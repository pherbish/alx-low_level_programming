#include <stdio.h>
/**
 * main- prints arguments passed to it
 * @argc:number of commandline commands
 * @argv:argument vector
 * Return:0when succesful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	pritnf("%d\n", argc - 1);
	return (0);
}

