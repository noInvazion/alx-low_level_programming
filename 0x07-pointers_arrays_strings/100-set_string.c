#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: double pointer variable that points to a char variable
 * @to: pointer variable to points to char variable
 */

void set_string(char **s, char *to)
{
	*s = to;
}
