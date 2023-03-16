#include <stdio.h>
#include <string.h>

/**
 * main - prints the numbers of args
 * @argc: holds number of arguments passed
 * @argv: holds the actual elements passed
 * Return: 0
 * noInvazion
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
