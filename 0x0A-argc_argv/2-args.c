#include <stdio.h>
/**
 * main-prints arguments it receives
 * @argv:argumentvectors
 * @argc:commandline arguments
 * Return:0 when successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0, i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
