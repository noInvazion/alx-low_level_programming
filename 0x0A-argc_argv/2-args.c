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
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
