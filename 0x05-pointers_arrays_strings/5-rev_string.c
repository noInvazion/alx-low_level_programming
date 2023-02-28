#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer to the string to be reversed
 */
void rev_string(char *s)
{
        int i, n;
        char c;

        n = 0;

        while (s[n] != '\0')
        {
                n++;
        }

        for (i = 0; i < n / 2; i++)
        {
                c = s[i];
                s[i] = s[n - 1 - i];
                s[n - 1 - i] = c;
        }
}
