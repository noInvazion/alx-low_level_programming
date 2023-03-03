#include "main.h"
/**
 * _strncat - function that concatenates
 * @dest: pointer variable for dest
 * @src: pointer variable for src
 * @n: variable of int data type
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *str = dest;
	int j;

	while (*dest != '\0')
	{
		dest++;
	}

	for (j = 0; j < n; j++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
