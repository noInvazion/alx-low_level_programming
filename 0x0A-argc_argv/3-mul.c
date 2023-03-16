#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the numbers of args
 * @argc: holds number of arguments passed
 * @argv: holds the actual elements passed
 * Return: 0
 * noInvazion
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int res = num1 * num2;

		printf("%d\n", res);
		return (0);
	}
	return (0);
}
