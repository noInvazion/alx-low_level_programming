#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds up positive numbers
 * @argc: holds number of arguments passed
 * @argv: holds the actual elements passed
 * Return: 0
 * noInvazion
 */

int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		putchar('0');
		putchar(' ');
	}
	
	int i;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
		printf("Error\n");
		return (1);
		}
	}

	int j;

	for (j = 1; j <= argc; i++)
	{
		int result;

		result += argv[j];
	}
	printf("%d\n", result);

	return (0);
}
