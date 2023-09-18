#include "main.h"
#include <stdio.h>

/**
 * main -  reverses a string
 *
 * return: always 0.
 */
void rev_string(char *s)
{
	int i;
	int tmp;

	i = 0;
	while (s[i] != '\0')
	{
		tmp = s[i];
		s[i] = s[i-1];
		s[i-1] = tmp;
		 i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}

