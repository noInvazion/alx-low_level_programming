#include <stdio.h>
/**
 *main - this is a function that print the size of various datatypes
 *
 * Return: 0
 */
int main(void)
{
char c;
int i;
float d;
long int li;
long long int lli;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
}
