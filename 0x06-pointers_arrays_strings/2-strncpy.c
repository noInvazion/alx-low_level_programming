#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer variable for dest variable
 * @src: pointer variable for src variable
 * @n: variable with int datatype
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
