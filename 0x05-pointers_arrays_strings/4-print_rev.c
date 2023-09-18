#include "main.h"
#include <stdio.h>

/**
 * main - prints a string, in reverse, followed by a new line.
 *
 * return: always 0.
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
     i--;
       while (i >= 0)
       {
	       _putchar(s[i]);
	       i--;
       }
       _putchar('\n');
}
