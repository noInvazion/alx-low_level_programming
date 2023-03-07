#include "main.h"

/**
 * _memcpy - function that copies bytes from src to dest
 * @dest: pointer variable that points to char
 * @src: pointer variable that points to char
 * @n: int datatype for n
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
